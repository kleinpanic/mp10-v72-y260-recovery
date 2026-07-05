#!/usr/bin/env python3
"""Create the Y260-bounded Monoprice MP10 v72 update.bin.

This is a reproducible binary patcher for the official full-size MP10 v72
firmware image. It validates the exact upstream image hash before changing any
bytes.
"""

from __future__ import annotations

import argparse
import datetime as dt
import hashlib
import json
import struct
from dataclasses import dataclass
from pathlib import Path


EXPECTED_OFFICIAL_SHA256 = "0f55858473446b5987b6ff4f010126adac1023686595c85b4c45c00de5dbd55a"
EXPECTED_SIZE = 0x1CF14
LOAD_BASE = 0x08008000
BUILD_OUTPUT_NAME = "custom_update.bin"
FLASH_ALIAS_NAME = "update.bin"


@dataclass(frozen=True)
class Patch:
    offset: int
    old_word: int
    new_word: int
    label: str
    rationale: str

    @property
    def address(self) -> int:
        return LOAD_BASE + self.offset

    @property
    def old_float(self) -> float:
        return struct.unpack("<f", self.old_word.to_bytes(4, "little"))[0]

    @property
    def new_float(self) -> float:
        return struct.unpack("<f", self.new_word.to_bytes(4, "little"))[0]


PATCHES = (
    Patch(
        offset=0x0E08,
        old_word=0x43910000,  # 290.0f
        new_word=0x43820000,  # 260.0f
        label="ubl_shared_mesh_max_clamp_value",
        rationale=(
            "Shared UBL helper clamp value. Stock X/Y mesh max were both 290, so the compiler "
            "folded this helper constant; lowering it is a safety fallback for parser/helper paths."
        ),
    ),
    Patch(
        offset=0x0E0C,
        old_word=0x43910001,  # next f32 above 290.0f
        new_word=0x43820001,  # next f32 above 260.0f
        label="ubl_shared_mesh_max_clamp_epsilon",
        rationale=(
            "Upper compare epsilon paired with ubl_shared_mesh_max_clamp_value. Must move with "
            "0x0e08 or the helper clamp becomes internally inconsistent."
        ),
    ),
    Patch(
        offset=0x2FE0,
        old_word=0x43960000,  # 300.0f
        new_word=0x43820000,  # 260.0f
        label="soft_endstop_max_y_block_a",
        rationale="Y max entry in the first observed {min XYZ, max XYZ} initialized soft-limit block.",
    ),
    Patch(
        offset=0x2FF8,
        old_word=0x43960000,  # 300.0f
        new_word=0x43820000,  # 260.0f
        label="soft_endstop_max_y_block_b",
        rationale="Y max entry in the repeated observed {min XYZ, max XYZ} initialized soft-limit block.",
    ),
    Patch(
        offset=0x1C8EC,
        old_word=0x43910000,  # 290.0f
        new_word=0x43820000,  # 260.0f
        label="ubl_y_mesh_coordinate_high_row",
        rationale=(
            "Second UBL coordinate array high row. The first matching array is left at X290; this "
            "patch changes the Y high row to the user-selected safe Y260 cap."
        ),
    ),
)


def sha256_bytes(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def f32_from_word(word: int) -> float:
    return struct.unpack("<f", word.to_bytes(4, "little"))[0]


def word_at(data: bytes, offset: int) -> int:
    return struct.unpack_from("<I", data, offset)[0]


def contiguous_diff_ranges(before: bytes, after: bytes) -> list[dict[str, object]]:
    ranges: list[dict[str, object]] = []
    i = 0
    while i < len(before):
        if before[i] == after[i]:
            i += 1
            continue
        start = i
        while i < len(before) and before[i] != after[i]:
            i += 1
        ranges.append(
            {
                "offset_start": f"0x{start:05x}",
                "offset_end_exclusive": f"0x{i:05x}",
                "address_start": f"0x{LOAD_BASE + start:08x}",
                "address_end_exclusive": f"0x{LOAD_BASE + i:08x}",
                "old_hex": before[start:i].hex(),
                "new_hex": after[start:i].hex(),
            }
        )
    return ranges


def validate_input(data: bytes, source: Path) -> None:
    digest = sha256_bytes(data)
    if digest != EXPECTED_OFFICIAL_SHA256:
        raise SystemExit(
            f"Refusing to patch {source}: expected official v72 sha256 "
            f"{EXPECTED_OFFICIAL_SHA256}, got {digest}"
        )
    if len(data) != EXPECTED_SIZE:
        raise SystemExit(f"Refusing to patch {source}: expected size {EXPECTED_SIZE}, got {len(data)}")
    reset = word_at(data, 0x04)
    reset_offset = (reset & ~1) - LOAD_BASE
    if not (0 <= reset_offset < len(data)):
        raise SystemExit(
            f"Refusing to patch {source}: reset vector 0x{reset:08x} is not inside image at base "
            f"0x{LOAD_BASE:08x}"
        )
    for patch in PATCHES:
        actual = word_at(data, patch.offset)
        if actual != patch.old_word:
            raise SystemExit(
                f"Refusing to patch {source}: {patch.label} at 0x{patch.offset:05x} expected "
                f"0x{patch.old_word:08x} ({patch.old_float:g}), got 0x{actual:08x} "
                f"({f32_from_word(actual):g})"
            )


def apply_patches(data: bytes) -> bytes:
    output = bytearray(data)
    for patch in PATCHES:
        struct.pack_into("<I", output, patch.offset, patch.new_word)
    return bytes(output)


def build_manifest(source: Path, output: Path, flash_alias: Path, before: bytes, after: bytes) -> dict[str, object]:
    reset = word_at(before, 0x04)
    return {
        "created_at_utc": dt.datetime.now(dt.UTC).isoformat(timespec="seconds"),
        "kind": "mp10_official_v72_binary_patch_y260",
        "source": str(source),
        "source_sha256": sha256_bytes(before),
        "source_size": len(before),
        "output": str(output),
        "output_sha256": sha256_bytes(after),
        "output_size": len(after),
        "flash_alias": str(flash_alias),
        "flash_alias_sha256": sha256_bytes(after),
        "flash_filename_required_by_bootloader": FLASH_ALIAS_NAME,
        "custom_output_is_byte_identical_to_flash_alias": True,
        "load_base": f"0x{LOAD_BASE:08x}",
        "reset_vector": f"0x{reset:08x}",
        "reset_offset": f"0x{((reset & ~1) - LOAD_BASE):05x}",
        "patches": [
            {
                "label": patch.label,
                "offset": f"0x{patch.offset:05x}",
                "address": f"0x{patch.address:08x}",
                "old_word": f"0x{patch.old_word:08x}",
                "new_word": f"0x{patch.new_word:08x}",
                "old_float": patch.old_float,
                "new_float": patch.new_float,
                "rationale": patch.rationale,
            }
            for patch in PATCHES
        ],
        "diff_ranges": contiguous_diff_ranges(before, after),
        "known_caveats": [
            (
                "The exact official full-size v72 source was not present in the workspace. This is a "
                "binary patch of the official raw v72 image, not a source rebuild."
            ),
            (
                "The UBL helper at 0x0e08/0x0e0c appears shared because stock X and Y mesh max are both "
                "290. Lowering it may also constrain that helper's X argument envelope, although the "
                "soft X max and X mesh coordinate table are intentionally left unchanged."
            ),
            "Strings such as MESH_MAX_Y are not patched; they are documentation/debug text, not motion limits.",
            "EEPROM writes and EEPROM resets are still not part of this artifact creation.",
        ],
        "pre_flash_checks": [
            "Verify output diff ranges match the expected patch offsets only.",
            "Keep the official v72 update.bin available as rollback media.",
            "Inspect the target SD card before copying update.bin; do not overwrite unrelated evidence silently.",
        ],
        "post_flash_readonly_checks": [
            "M115 should still report VERSION: 72.",
            "M211 should report Y max at or below 260 if the soft-limit patch is active.",
            "M503 should be captured without M500/M502.",
            "M420 V or G29 W should show no Y mesh/probe coordinate above 260 if the UBL patch is active.",
            "M119, M105, and M27 should be captured before any motion, heat, extrusion, or probing.",
        ],
    }


def write_markdown_manifest(manifest: dict[str, object], path: Path) -> None:
    lines = [
        "# MP10 Official v72 Y260 Patch Manifest",
        "",
        f"- Source: `{manifest['source']}`",
        f"- Source SHA-256: `{manifest['source_sha256']}`",
        f"- Output: `{manifest['output']}`",
        f"- Output SHA-256: `{manifest['output_sha256']}`",
        f"- Flash alias: `{manifest['flash_alias']}`",
        f"- Flash alias SHA-256: `{manifest['flash_alias_sha256']}`",
        f"- Required on-card bootloader filename: `{manifest['flash_filename_required_by_bootloader']}`",
        f"- Load base: `{manifest['load_base']}`",
        "",
        "`custom_update.bin` and `update.bin` are byte-identical. The custom name is the release/build artifact; "
        "the MP10/Malyan bootloader still expects the file to be named `update.bin` on the microSD card.",
        "",
        "## Patches",
        "",
    ]
    for patch in manifest["patches"]:
        lines.extend(
            [
                f"- `{patch['label']}` at `{patch['offset']}` / `{patch['address']}`: "
                f"`{patch['old_float']}` -> `{patch['new_float']}`",
                f"  - {patch['rationale']}",
            ]
        )
    lines.extend(["", "## Diff Ranges", ""])
    for diff in manifest["diff_ranges"]:
        lines.append(
            f"- `{diff['offset_start']}`..`{diff['offset_end_exclusive']}`: "
            f"`{diff['old_hex']}` -> `{diff['new_hex']}`"
        )
    lines.extend(["", "## Caveats", ""])
    for caveat in manifest["known_caveats"]:
        lines.append(f"- {caveat}")
    lines.extend(["", "## Post-Flash Read-Only Checks", ""])
    for check in manifest["post_flash_readonly_checks"]:
        lines.append(f"- {check}")
    path.write_text("\n".join(lines) + "\n", encoding="utf-8")


def write_checksums(paths: list[Path], checksum_path: Path) -> None:
    lines = []
    for path in paths:
        digest = sha256_bytes(path.read_bytes())
        lines.append(f"{digest}  {path.as_posix()}")
    checksum_path.write_text("\n".join(lines) + "\n", encoding="utf-8")


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--source",
        type=Path,
        default=Path("official/update.bin"),
        help="Official full-size MP10 v72 update.bin to patch.",
    )
    parser.add_argument(
        "--output-dir",
        type=Path,
        default=Path("firmware"),
        help="Directory where the patched update.bin and manifests will be written.",
    )
    parser.add_argument("--force", action="store_true", help="Overwrite existing generated artifacts.")
    return parser.parse_args()


def main() -> int:
    args = parse_args()
    source = args.source
    out_dir = args.output_dir
    output = out_dir / BUILD_OUTPUT_NAME
    flash_alias = out_dir / FLASH_ALIAS_NAME
    manifest_json = out_dir / "manifest.json"
    manifest_md = out_dir / "manifest.md"
    checksum_path = out_dir / "SHA256SUMS.txt"

    before = source.read_bytes()
    validate_input(before, source)
    after = apply_patches(before)

    if len(after) != len(before):
        raise SystemExit("Internal error: patched image size changed")

    out_dir.mkdir(parents=True, exist_ok=True)
    for path in (output, flash_alias, manifest_json, manifest_md, checksum_path):
        if path.exists() and not args.force:
            raise SystemExit(f"Refusing to overwrite {path}; rerun with --force")

    output.write_bytes(after)
    flash_alias.write_bytes(after)
    manifest = build_manifest(source, output, flash_alias, before, after)
    manifest_json.write_text(json.dumps(manifest, indent=2, sort_keys=True) + "\n", encoding="utf-8")
    write_markdown_manifest(manifest, manifest_md)
    write_checksums([output, flash_alias, manifest_json, manifest_md], checksum_path)

    print(f"source_sha256={manifest['source_sha256']}")
    print(f"output={output}")
    print(f"output_sha256={manifest['output_sha256']}")
    print(f"flash_alias={flash_alias}")
    print(f"manifest_json={manifest_json}")
    print(f"manifest_md={manifest_md}")
    print(f"checksums={checksum_path}")
    print(f"patch_count={len(PATCHES)}")
    print(f"diff_range_count={len(manifest['diff_ranges'])}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
