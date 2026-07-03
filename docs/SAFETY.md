# Safety Notes

This firmware is for a specific failure mode: a full-size MP10 on v72 where stock calibration/probing commands exceed the machine's real Y travel and hit the front/high-Y hard limit.

Hard rules:

- Do not use this on MP10 Mini firmware or hardware.
- Do not flash if `M115` does not report `VERSION: 72` before the update.
- Do not assume `M420 V` corner labels alone prove the active mesh coordinates.
- Do not run stock calibration unattended.
- Do not run high-Y movement above your verified safe travel.
- Do not save EEPROM until you understand the current `M503`, `M420 V`, and mesh state.
- Keep the official v72 firmware available for rollback.

The tested recovery flow used USB serial verification, supervised calibration, no heating during calibration, no extrusion during motion validation, and no EEPROM writes during the firmware/probe proof.

