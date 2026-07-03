---
name: MP10 Y-axis overtravel report
about: Report an MP10 / MA10 Y-front grinding or calibration overtravel case
title: "Y overtravel report: "
labels: ["y-axis", "calibration", "needs-evidence"]
assignees: []
---

## Printer

- Model:
- Full-size MP10 / MA10-class confirmed? yes/no/unsure
- MP10 Mini? yes/no
- Approximate removable bed/build surface size:

## Firmware Evidence

Paste read-only output from:

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

## Failure

- What command or touchscreen action caused the hit/grind?
- Approximate Y coordinate when it happens, if known:
- Does `Y260` clear safely on your machine?
- Does stock calibration/probing try to reach `Y270..Y290`?

## Physical Notes

- What part contacts the front/high-Y limit?
- Any non-stock parts, spacers, brackets, wheels, knobs, or bed hardware?
- Any cable, belt, idler, or frame snag?

## Recovery Firmware

- Have you flashed this Y260 firmware? yes/no
- If yes, does `M211` now show `Y260`?
- If yes, did supervised calibration avoid the front/high-Y hit?

## Safety

Do not include Wi-Fi passwords, private hostnames, access tokens, or unrelated serial logs containing secrets.

