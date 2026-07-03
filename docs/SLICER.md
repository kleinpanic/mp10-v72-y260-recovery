# Slicer and Host Profile Guide

This recovery package is for a full-size MP10 / MA10-class printer running the
custom v72 Y260 firmware with a valid active UBL mesh. The slicer must match the
firmware recovery envelope. Do not use a stock MP10 Mini profile or a stock
full-size MP10 `300 x 300` Y profile with this firmware.

## Required Machine Size

Set the host or slicer machine definition to:

```text
X max: 300 mm
Y max: 260 mm
Z max: 400 mm
Origin at center: off
```

The Y value is intentionally `260`, not the stock full-size MP10 `300`. This is
the recovery limit used by the custom firmware and the validated UBL mesh. Host
software must not place models, purge moves, travel moves, or end moves above
`Y260`.

## Included Profiles

Use these files as the public reference:

- `profiles/cura/MP10_SAFE_profile.cfg` - Cura custom FFF settings packet.
- `profiles/mp10-safe-real-print-start.gcode` - print start template with heat,
  homing, UBL activation, and purge.
- `profiles/mp10-safe-real-print-end.gcode` - conservative shutdown/end moves.
- `profiles/mp10-safe-start.gcode` - motion-only start template for supervised
  dry checks; it intentionally omits heat and extrusion.

For Cura, create or import a custom FFF printer using the required machine size,
then copy the start and end G-code from the profile or the standalone templates.
For other hosts, use the same dimensions and command order even if the UI names
are different.

## Required Start G-code Policy

Print start G-code must disable leveling before homing, home, then enable the
already-valid mesh:

```gcode
M420 S0
G28
M420 S1
```

The included real-print start template also:

- Uses absolute XYZ motion and absolute extrusion.
- Preheats the bed and warms the nozzle to `150 C` before homing.
- Waits for final nozzle temperature after homing.
- Runs the purge line inside the bounded bed area at `X25..X27`, `Y30..Y120`.

The active mesh must already be valid before printing. A print file is not the
place to create or repair the mesh.

## Forbidden In Print Start G-code

Do not put these patterns in normal print start G-code:

- `G29` or other probing/calibration commands.
- `M206 Y40` or any Y home-offset workaround.
- `M500`, `M501`, `M502`, `M851`, or other EEPROM/config load/save/reset or
  offset commands.
- Any move above `Y260`.
- Purge, prime, park, or end moves outside `X0..300`, `Y0..260`, `Z0..400`.

The old `M206 Y40` workaround was only a temporary diagnostic approach. It is
not part of this recovery profile and should not be saved to EEPROM.

## Before Sending a New Print

Review the generated G-code before printing:

- Machine header or slicer settings use `X300 Y260 Z400`.
- The start block contains `M420 S0` before `G28` and `M420 S1` after `G28`.
- There is no `G29`.
- There is no `M206`.
- There is no `M500`.
- The purge line and all visible setup/end moves stay within bounds.

The development lint policy used for this recovery checks for the same hazards:
probing in print files, EEPROM/config mutation or reset commands, missing
`M420 S0` before `G28`, missing mesh activation, and absolute XYZ moves outside
the `300 x 260 x 400` envelope.

## Operational Notes

Keep first prints supervised. This recovery firmware and profile constrain the
known unsafe high-Y region, but they do not prove that every MP10-class machine
has identical mechanical clearance.

Use touchscreen calibration, UBL probing, or mesh repair only as a separate,
supervised recovery operation. Do not hide calibration in slicer start G-code.
