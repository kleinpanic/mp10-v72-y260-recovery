#!/usr/bin/env python3
"""Generate analysis source artifacts from official MP10 v72 update.bin.

This does not recreate the original vendor C/C++ source. It imports the raw
STM32 firmware image into Ghidra and exports generated C-like pseudocode,
disassembly, and a function index under src/official-v72.
"""

from __future__ import annotations

import argparse
import hashlib
import os
import shutil
import subprocess
import tempfile
from pathlib import Path


EXPECTED_OFFICIAL_SHA256 = "0f55858473446b5987b6ff4f010126adac1023686595c85b4c45c00de5dbd55a"
LOAD_BASE = "0x08008000"
DEFAULT_LANGUAGE = "ARM:LE:32:Cortex"
DEFAULT_COMPILER = "default"


def sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as fh:
        for chunk in iter(lambda: fh.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def find_ghidra_headless(explicit: str | None) -> Path:
    candidates: list[Path] = []
    workspace_root = Path(__file__).resolve().parents[3] if len(Path(__file__).resolve().parents) > 3 else None
    if explicit:
        candidates.append(Path(explicit))
    if os.environ.get("GHIDRA_HEADLESS"):
        candidates.append(Path(os.environ["GHIDRA_HEADLESS"]))
    if os.environ.get("GHIDRA_HOME"):
        candidates.append(Path(os.environ["GHIDRA_HOME"]) / "support/analyzeHeadless")
    for name in ("analyzeHeadless",):
        found = shutil.which(name)
        if found:
            candidates.append(Path(found))
    if workspace_root:
        candidates.extend(
            [
                workspace_root / "mp10-debug/tooling/ghidra_11.3.1_PUBLIC/support/analyzeHeadless",
                workspace_root / "mp10-debug/tooling/ghidra_12.1.2_PUBLIC/support/analyzeHeadless",
            ]
        )
    for path in (
        Path.home() / ".local/srcs/ghidra_11.3.1_PUBLIC/support/analyzeHeadless",
    ):
        candidates.append(path)

    for candidate in candidates:
        if candidate.is_file() and os.access(candidate, os.X_OK):
            return candidate
    raise SystemExit(
        "Could not find Ghidra analyzeHeadless. Pass --ghidra /path/to/support/analyzeHeadless "
        "or set GHIDRA_HEADLESS."
    )


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--source",
        type=Path,
        default=Path("official/update.bin"),
        help="Official full-size MP10 v72 update.bin.",
    )
    parser.add_argument(
        "--output-dir",
        type=Path,
        default=Path("src/official-v72"),
        help="Directory where generated analysis files will be written.",
    )
    parser.add_argument(
        "--ghidra",
        help="Path to Ghidra support/analyzeHeadless. Defaults to GHIDRA_HEADLESS or common local paths.",
    )
    parser.add_argument("--language", default=DEFAULT_LANGUAGE, help="Ghidra language ID.")
    parser.add_argument("--compiler", default=DEFAULT_COMPILER, help="Ghidra compiler spec ID.")
    parser.add_argument("--force", action="store_true", help="Delete and recreate output directory.")
    return parser.parse_args()


def main() -> int:
    args = parse_args()
    source = args.source
    output_dir = args.output_dir
    script_dir = Path(__file__).resolve().parent
    export_script = script_dir / "ExportMp10Firmware.java"

    if sha256(source) != EXPECTED_OFFICIAL_SHA256:
        raise SystemExit(f"Refusing to decompile non-official v72 image: {source}")
    if output_dir.exists():
        if not args.force:
            raise SystemExit(f"Refusing to overwrite {output_dir}; rerun with --force")
        shutil.rmtree(output_dir)
    output_dir.mkdir(parents=True)

    ghidra = find_ghidra_headless(args.ghidra)
    with tempfile.TemporaryDirectory(prefix="mp10-ghidra-") as tmp:
        project_dir = Path(tmp)
        cmd = [
            str(ghidra),
            str(project_dir),
            "mp10-v72",
            "-import",
            str(source.resolve()),
            "-processor",
            args.language,
            "-cspec",
            args.compiler,
            "-loader",
            "BinaryLoader",
            "-loader-baseAddr",
            LOAD_BASE,
            "-scriptPath",
            str(script_dir),
            "-postScript",
            export_script.name,
            str(output_dir.resolve()),
            "-analysisTimeoutPerFile",
            "120",
            "-deleteproject",
        ]
        env = os.environ.copy()
        env.setdefault("LC_ALL", "C.UTF-8")
        subprocess.run(cmd, check=True, env=env)

    expected = [
        output_dir / "README.md",
        output_dir / "FUNCTIONS.md",
        output_dir / "decompiled.c",
        output_dir / "disassembly.s",
    ]
    missing = [path for path in expected if not path.is_file()]
    if missing:
        raise SystemExit("Ghidra finished without expected export files: " + ", ".join(map(str, missing)))

    print(f"ghidra={ghidra}")
    print(f"source={source}")
    print(f"output_dir={output_dir}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
