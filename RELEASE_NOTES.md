# v72-y260-1

Initial public recovery release for affected full-size Monoprice MP10 / Malyan MA10-class printers where stock v72 calibration/probing overtravels the Y axis into the front hard limit.

## Firmware

- Base: official full-size MP10 v72 `update.bin`
- Source SHA-256: `0f55858473446b5987b6ff4f010126adac1023686595c85b4c45c00de5dbd55a`
- Patched SHA-256: `51e61467e79c5cfd9f59300a8665577da1bed0d14209e6dc717ff7c3f374a7f5`
- Recovery policy: bound Y max / UBL high-Y path to `260 mm`

## Why

The tested printer could not physically clear the stock `Y290` calibration/probe row. The custom image keeps v72 identity but prevents the firmware-native calibration path from trying to probe beyond the selected safe `Y260` envelope.

## Verify

After flashing, confirm:

- `M115` reports `VERSION: 72`
- `M211` reports max `Y260.00`
- `G29 W` reports Y mesh points ending at `260.000`
- Supervised `G29 P1` does not probe above `Y260`

This is unofficial firmware. Keep official v72 rollback media available.

## Docs Added

- Requirements and upstream/fork notes.
- Slicer/profile setup for `X300 Y260 Z400` with active UBL.
- SD-card maintenance layout and Wi-Fi credential handling.
- Evidence summary for the tested recovery printer.
