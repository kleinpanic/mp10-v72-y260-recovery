# v72-y260-1

Initial public firmware patch for affected full-size Monoprice MP10 / Malyan MA10-class printers where stock v72 calibration/probing overtravels the Y axis into the front hard limit.

## Firmware

- Base: official full-size MP10 v72 `update.bin`
- Base SHA-256: `0f55858473446b5987b6ff4f010126adac1023686595c85b4c45c00de5dbd55a`
- Patched SHA-256: `51e61467e79c5cfd9f59300a8665577da1bed0d14209e6dc717ff7c3f374a7f5`
- Policy: bound the Y soft limit and UBL high-Y path to `260 mm`

## Included

- `firmware/update.bin`
- `firmware/manifest.json`
- `firmware/manifest.md`
- `firmware/SHA256SUMS.txt`
- `tools/create_update_bin.py`
- `tools/decompile_official_v72.py`
- `tools/ExportMp10Firmware.java`
- `src/README.md`
- `src/vendor-reference/` Monoprice-published MP10-family C/C++ source archive, upstream README/LICENSE, and extracted source tree
- `src/official-v72/` generated Ghidra analysis output

## Source Status

This release includes original vendor C/C++ source under `src/vendor-reference/` from Monoprice3DP `MiniV2DeltaSourceCode`. That shared source tree includes MP10/MA10-family code and a full-size MA10 configuration block, but it is not proven to build the exact official full-size v72 binary.

The official full-size v72 artifact used for the shipped firmware remains the v72 `update.bin` binary. This release includes a reproducible binary patcher and generated Ghidra analysis output for that binary; `firmware/update.bin` is still a validated binary patch, not a clean source rebuild.

## Verify

After flashing, confirm:

- `M115` reports `VERSION: 72`
- `M211` reports max `Y260.00`
- `G29 W` reports Y mesh points ending at `260.000`
- Supervised `G29 P1` does not probe above `Y260`

This is unofficial firmware. Keep official v72 rollback media available.
