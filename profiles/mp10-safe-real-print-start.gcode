; MP10 safe real-print start template for Cura-style placeholders.
; Current policy: do not use touchscreen calibration or G29 in start G-code.
; Requires the custom full-size v72 Y260 firmware and a valid active UBL mesh.
G21
G90
M82
M107
M420 S0

; Warm the bed and preheat the nozzle below print temperature before homing.
M140 S{material_bed_temperature_layer_0}
M104 S150
M190 S{material_bed_temperature_layer_0}

; Home only after leveling is explicitly off.
M420 S0
G28
M420 S1

; Finish nozzle heat after homing to reduce stationary ooze.
G1 Z5 F300
M109 S{material_print_temperature_layer_0}

G92 E0
G1 Z0.30 F300
G1 X25 Y30 F3000
G1 Z0.20 F300
G1 X25 Y120 E8 F600
G1 X27 Y120 F3000
G1 X27 Y30 E16 F600
G92 E0
