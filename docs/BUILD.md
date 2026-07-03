# Build And Reproduce

This repo contains a binary patch script, not a full Marlin source rebuild. The source image must be the official full-size MP10 v72 `update.bin`.

Expected official v72 source SHA-256:

```text
0f55858473446b5987b6ff4f010126adac1023686595c85b4c45c00de5dbd55a
```

Run:

```bash
python3 tools/mp10_patch_v72_y260.py \
  --source /path/to/official/full-size/v72/update.bin \
  --output-dir firmware/mp10-v72-y260 \
  --force
```

Expected patched output SHA-256:

```text
51e61467e79c5cfd9f59300a8665577da1bed0d14209e6dc717ff7c3f374a7f5
```

The patch script refuses to run if the source hash, image size, reset vector, or expected original constants do not match the known official v72 image.

