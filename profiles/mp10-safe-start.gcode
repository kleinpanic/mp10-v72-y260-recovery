; Full-size MP10 conservative safe start template.
; Preconditions:
; - Individual homing gates have passed under physical monitoring.
; - Custom full-size v72 Y260 firmware is installed.
; - A valid UBL mesh has been read back before use.
; - No touchscreen calibration / auto-leveling is used.
G21
G90
M82
M107
M420 S0
G28
M420 S1
G1 Z10 F300
G1 X25 Y30 F3000
; Heating and extrusion are intentionally omitted here.
