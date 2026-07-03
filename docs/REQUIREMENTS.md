# Requirements

## Printer

- Full-size Monoprice MP10 / Malyan MA10-class printer.
- Not MP10 Mini.
- Existing firmware should be official full-size v72 before patching.
- USB serial access is strongly recommended for verification.
- Operator must be present for flashing and first calibration/probe after flashing.

## Expected Pre-Flash Serial Evidence

Run these read-only commands before flashing:

```gcode
M115
M211
M503
M420 V
M119
M105
M27
M114
```

Expected scope:

- `M115` reports `VERSION: 72`.
- `M211` reports full-size MP10-like bounds, normally `X300 Y300 Z400`.
- The printer is idle, not heating, and not SD printing.
- The failure being solved is a physical Y/front overtravel during stock calibration/probing.

## Host Tools

The patch script uses only the Python standard library.

- Python 3.10 or newer recommended.
- No pip dependencies are required.

`requirements.txt` is intentionally empty except for a note because the patcher has no third-party runtime dependencies.

## Firmware Input

To reproduce the binary locally, start from the official full-size MP10 v72 `update.bin`.

Expected official source SHA-256:

```text
0f55858473446b5987b6ff4f010126adac1023686595c85b4c45c00de5dbd55a
```

The patch script refuses to run if the input hash, size, reset vector, or original patch constants do not match.

## Do Not Use This If

- Your machine is an MP10 Mini.
- Your printer is not already on the full-size MP10 v72 firmware family.
- You are trying to solve an unrelated extrusion, hotend, bed adhesion, thermistor, or Z-offset problem.
- Your stock printer can safely complete its normal Y calibration/probe path without front overtravel.

