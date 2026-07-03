# MP10 v72 Y260 Recovery Firmware

Unofficial recovery firmware for the full-size Monoprice MP10 / Malyan MA10-class printer when the stock full-size v72 calibration path drives the Y axis farther forward than the machine can physically travel.

This build keeps the official full-size MP10 v72 firmware family and applies one recovery policy: bound the Y envelope to `260 mm` so calibration/probing and host output do not try to use the unsafe stock high-Y region.

## What This Fixes

On the affected printer, official full-size v72 reported `X300 Y300 Z400`, but stock calibration/UBL could target the high-Y row around `Y290`. The moving bed physically reached the front limit around `Y260..Y270`, causing grinding/slapping instead of a clean calibration run.

This firmware changes the relevant Y max / UBL high-row constants so the printer uses `Y260` instead of the unsafe stock high-Y target. It is intended as a no-cut/no-drill recovery option for machines showing the same MP10 front/high-Y overtravel failure.

## Included Files

- `firmware/mp10-v72-y260/update.bin` - ready-to-flash custom firmware image.
- `firmware/mp10-v72-y260/MANIFEST.json` - exact binary patch manifest.
- `firmware/mp10-v72-y260/MANIFEST.md` - human-readable patch manifest.
- `tools/mp10_patch_v72_y260.py` - reproducible patch script for the official full-size v72 `update.bin`.
- `evidence/` - serial logs from the machine this was built to recover.

`update.bin` SHA-256:

```text
51e61467e79c5cfd9f59300a8665577da1bed0d14209e6dc717ff7c3f374a7f5
```

## Use This Only If

- Your printer is the full-size MP10 / MA10-class machine, not the MP10 Mini.
- Your current firmware is official full-size v72 (`M115` reports `VERSION: 72`).
- Your stock firmware reports full-size geometry, usually `M211` max `X300 Y300 Z400`.
- Your machine physically cannot complete the stock high-Y calibration/probe path without hitting the front/high-Y limit.
- You can supervise the flash and the first post-flash calibration.

Do not use this on an MP10 Mini, on unknown firmware, or on a printer whose stock Y travel safely clears the normal MP10 calibration envelope.

## Install

1. Back up current serial state over USB:
   `M115`, `M211`, `M503`, `M420 V`, `M119`, `M105`, `M27`, and `M114`.
2. Copy `firmware/mp10-v72-y260/update.bin` to the root of a FAT-formatted microSD card as `update.bin`.
3. Power the printer off.
4. Insert the card and power the printer on.
5. Wait for the firmware update process to finish.
6. Remove or rename `update.bin` on the SD card after the update so it does not flash repeatedly.

## Verify Before Motion

After flashing, connect over USB and run read-only checks before any heating, extrusion, probing, or printing:

```gcode
M115
M211
M503
G29 W
M420 V
M119
M105
M27
M114
```

Expected key evidence:

- `M115` still reports `VERSION: 72`.
- `M211` reports max `Y260.00`.
- `G29 W` reports Y-axis mesh points ending at `260.000`.
- `G29 P1` should not probe above `Y260`.

Known display caveat: `M420 V` topography text on this firmware can still print corner labels like `(20,290)` even when the exported mesh coordinates and actual probe path are bounded to `Y260`. Use `G29 W`, `G29 S-1`, and the live verbose probe path as the authoritative evidence.

## Proven On The Recovery Printer

The included evidence shows:

- Official v72 identity remained intact.
- Post-flash `M211` reported `Max: X300.00 Y260.00 Z400.00`.
- `G29 W` reported Y-axis mesh points `20.000 87.500 155.000 222.500 260.000`.
- Verbose `G29 P1` probed the high Y row at `Y260`, not `Y290`.
- `G29 P3` filled the unreachable/missing mesh cells in RAM.
- `G29 A` activated a valid mesh.
- A motion-only active-mesh validation completed without high-Y grinding.

## Status

This is an unofficial recovery firmware and not a Monoprice release. It fixes the unsafe high-Y calibration envelope on the tested printer, but it is not a substitute for inspecting your own machine. Use at your own risk and keep the official v72 firmware available as rollback media.

