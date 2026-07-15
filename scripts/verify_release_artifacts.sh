#!/usr/bin/env bash
set -euo pipefail

repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
source_bin="${MP10_OFFICIAL_UPDATE_BIN:-${repo_root}/../../upstream/firmware-v72/MA10v72/update.bin}"
build_dir="${MP10_BUILD_DIR:-${repo_root}/build/firmware}"
expected_sha="51e61467e79c5cfd9f59300a8665577da1bed0d14209e6dc717ff7c3f374a7f5"

cd "$repo_root"

python3 -m py_compile tools/create_update_bin.py
python3 tools/create_update_bin.py \
  --source "$source_bin" \
  --output-dir "$build_dir" \
  --force

generated_sha="$(sha256sum "$build_dir/custom_update.bin" | awk '{print $1}')"
if [[ "$generated_sha" != "$expected_sha" ]]; then
  echo "custom_update.bin sha mismatch: got $generated_sha expected $expected_sha" >&2
  exit 1
fi

cmp -s "$build_dir/custom_update.bin" "$build_dir/update.bin"
cmp -s firmware/custom_update.bin firmware/update.bin
cmp -s "$build_dir/custom_update.bin" firmware/custom_update.bin
cmp -s "$build_dir/update.bin" firmware/update.bin

(cd firmware && sha256sum -c SHA256SUMS.txt)
(cd "$build_dir" && sha256sum -c SHA256SUMS.txt)

python3 - <<'PY'
import json
from pathlib import Path

manifest = json.loads(Path("firmware/manifest.json").read_text(encoding="utf-8"))
assert manifest["output"].endswith("custom_update.bin"), manifest["output"]
assert manifest["flash_alias"].endswith("update.bin"), manifest["flash_alias"]
assert manifest["output_sha256"] == manifest["flash_alias_sha256"]
assert manifest["custom_output_is_byte_identical_to_flash_alias"] is True
assert manifest["flash_filename_required_by_bootloader"] == "update.bin"
assert len(manifest["patches"]) == 5
assert len(manifest["diff_ranges"]) == 5
PY

echo "release artifacts verified"
