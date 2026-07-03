# MP10 Y260 Recovery Profiles

These profiles target a full-size MP10 / MA10-class printer running the custom
v72 Y260 recovery firmware with a valid active UBL mesh.

Required machine bounds:

```text
X max: 300 mm
Y max: 260 mm
Z max: 400 mm
Origin at center: off
```

Files:

- `cura/MP10_SAFE_profile.cfg` - Cura custom FFF settings packet.
- `mp10-safe-real-print-start.gcode` - normal print start template.
- `mp10-safe-real-print-end.gcode` - normal print end template.
- `mp10-safe-start.gcode` - motion-only supervised check template.

The real-print start template intentionally uses:

```gcode
M420 S0
G28
M420 S1
```

Do not add `G29`, `M206 Y40`, or EEPROM writes such as `M500` to print start
G-code. Keep purge and setup moves inside `X0..300`, `Y0..260`, `Z0..400`.

See `../docs/SLICER.md` for the full slicer and host setup policy.
