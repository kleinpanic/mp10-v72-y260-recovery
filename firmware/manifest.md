# MP10 Official v72 Y260 Patch Manifest

- Source: `../../upstream-MP10Firmware72/MA10v72/update.bin`
- Source SHA-256: `0f55858473446b5987b6ff4f010126adac1023686595c85b4c45c00de5dbd55a`
- Output: `firmware/custom_update.bin`
- Output SHA-256: `51e61467e79c5cfd9f59300a8665577da1bed0d14209e6dc717ff7c3f374a7f5`
- Flash alias: `firmware/update.bin`
- Flash alias SHA-256: `51e61467e79c5cfd9f59300a8665577da1bed0d14209e6dc717ff7c3f374a7f5`
- Required on-card bootloader filename: `update.bin`
- Load base: `0x08008000`

`custom_update.bin` and `update.bin` are byte-identical. The custom name is the release/build artifact; the MP10/Malyan bootloader still expects the file to be named `update.bin` on the microSD card.

## Patches

- `ubl_shared_mesh_max_clamp_value` at `0x00e08` / `0x08008e08`: `290.0` -> `260.0`
  - Shared UBL helper clamp value. Stock X/Y mesh max were both 290, so the compiler folded this helper constant; lowering it is a safety fallback for parser/helper paths.
- `ubl_shared_mesh_max_clamp_epsilon` at `0x00e0c` / `0x08008e0c`: `290.0000305175781` -> `260.0000305175781`
  - Upper compare epsilon paired with ubl_shared_mesh_max_clamp_value. Must move with 0x0e08 or the helper clamp becomes internally inconsistent.
- `soft_endstop_max_y_block_a` at `0x02fe0` / `0x0800afe0`: `300.0` -> `260.0`
  - Y max entry in the first observed {min XYZ, max XYZ} initialized soft-limit block.
- `soft_endstop_max_y_block_b` at `0x02ff8` / `0x0800aff8`: `300.0` -> `260.0`
  - Y max entry in the repeated observed {min XYZ, max XYZ} initialized soft-limit block.
- `ubl_y_mesh_coordinate_high_row` at `0x1c8ec` / `0x080248ec`: `290.0` -> `260.0`
  - Second UBL coordinate array high row. The first matching array is left at X290; this patch changes the Y high row to the user-selected safe Y260 cap.

## Diff Ranges

- `0x00e0a`..`0x00e0b`: `91` -> `82`
- `0x00e0e`..`0x00e0f`: `91` -> `82`
- `0x02fe2`..`0x02fe3`: `96` -> `82`
- `0x02ffa`..`0x02ffb`: `96` -> `82`
- `0x1c8ee`..`0x1c8ef`: `91` -> `82`

## Caveats

- The exact official full-size v72 source was not present in the workspace. This is a binary patch of the official raw v72 image, not a source rebuild.
- The UBL helper at 0x0e08/0x0e0c appears shared because stock X and Y mesh max are both 290. Lowering it may also constrain that helper's X argument envelope, although the soft X max and X mesh coordinate table are intentionally left unchanged.
- Strings such as MESH_MAX_Y are not patched; they are documentation/debug text, not motion limits.
- EEPROM writes and EEPROM resets are still not part of this artifact creation.

## Post-Flash Read-Only Checks

- M115 should still report VERSION: 72.
- M211 should report Y max at or below 260 if the soft-limit patch is active.
- M503 should be captured without M500/M502.
- M420 V or G29 W should show no Y mesh/probe coordinate above 260 if the UBL patch is active.
- M119, M105, and M27 should be captured before any motion, heat, extrusion, or probing.
