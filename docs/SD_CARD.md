# SD Card Maintenance

This release expects a clean, boring SD card. Keep recovery files grouped by
purpose, keep private Wi-Fi material out of public copies, and avoid running
old loose G-code whose motion limits are unknown.

## Recommended Layout

Use this layout for an MP10 v72 Y260 recovery card:

```text
/
├── maintenance/
│   ├── firmware/
│   │   └── mp10-v72-y260/
│   │       └── update.bin
│   └── wifi/
│       ├── README.txt
│       └── <local Wi-Fi setup files, if needed>
├── samples/
│   └── cat.gcode
└── tests/
    └── <first-layer Y260 active-UBL test G-code>
```

The firmware image is stored under
`maintenance/firmware/mp10-v72-y260/update.bin` so it is not accidentally left
at the card root after flashing. If the printer requires `update.bin` at the
root for the actual flash step, copy it there only for that supervised flash,
then remove the root copy after the update completes.

## Wi-Fi Files

The `maintenance/wifi/` directory is for local Wi-Fi maintenance files only.
Do not commit, publish, or share real SSIDs, passwords, tokens, hostnames, or
other private network details. Public examples should use placeholders such as
`YOUR_SSID` and `YOUR_PASSWORD`.

Before sharing an SD card archive or repository snapshot, inspect
`maintenance/wifi/` and remove any local credentials.

## Safe G-code Use

Use only G-code that matches this recovery's Y260-safe assumptions unless you
have reviewed the file line by line.

- Do not run unknown old G-code that can move above `Y260`.
- Do not run old calibration, purge, wipe, bed probing, or start-code files
  that were generated before this recovery unless they have been checked for
  high-Y moves.
- Keep known examples under `samples/`, such as `samples/cat.gcode`.
- Keep validation jobs under `tests/`, including the first-layer test that
  exercises the active UBL mesh within the Y260 recovery envelope.

When in doubt, inspect the file for `G0` and `G1` moves before printing. Any
movement beyond verified safe travel should be treated as unsafe until proven
otherwise.

## Local Recovery Card Cleanup

The local recovery SD card was backed up before cleanup. After the backup, the
card was cleaned to remove:

- old loose G-code files from the root;
- macOS metadata files;
- a stale root-level `update.bin`.

The cleaned card should keep firmware, Wi-Fi maintenance files, samples, and
tests in their named directories so future maintenance work does not mix
private credentials, firmware flash files, and print jobs at the card root.

## Root Directory Rules

The root of the card should stay sparse. Avoid keeping firmware images, private
configuration, or arbitrary historical prints there.

Acceptable temporary root use:

- `update.bin` during a supervised firmware flash only, if required by the
  printer.

Remove after use:

- root-level `update.bin`;
- old loose G-code;
- generated OS metadata;
- any file containing Wi-Fi credentials.
