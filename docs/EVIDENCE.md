# Evidence Summary

Relevant logs are included under `evidence/`.

## Post-Flash Firmware Bounds

`evidence/20260702-y260-g29-p1-debug.txt` shows:

```text
Max: X300.00 Y260.00 Z400.00
```

## Mesh Coordinate Report

The same log shows `G29 W` reporting:

```text
Y-Axis Mesh Points at: 20.000  87.500  155.000  222.500  260.000
```

## Actual Probe Path

Verbose `G29 P1` output includes high-row probes at:

```text
probe_pt(87.50, 260.00, no stow)
probe_pt(155.00, 260.00, no stow)
probe_pt(222.50, 260.00, no stow)
probe_pt(290.00, 260.00, no stow)
```

No verbose probe point above `Y260` appears in the post-flash calibration evidence.

## Mesh Activation

`evidence/20260702-y260-g29-p3-smart-fill.txt` shows `G29 P3` filling missing mesh cells in RAM and producing `ubl.mesh_is_valid = 1`.

`evidence/20260702-y260-active-mesh-air-validation.txt` shows the mesh active with `M420 S1` and a bounded motion-only validation completed after homing with leveling disabled and then re-enabled.

