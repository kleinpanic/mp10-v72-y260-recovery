# Upstream / Fork Notes

This repository is best understood as an unofficial recovery derivative of the official full-size MP10 v72 firmware binary.

Upstream firmware repository:

```text
git@github.com:Monoprice3DP/MP10Firmware72.git
```

The upstream repository contains:

```text
README.md
LICENSE
MA10v72/update.bin
```

It does not contain a buildable Marlin source tree for this exact full-size v72 image. Because of that, this recovery package is not a normal source fork. It is a reproducible binary patch against the official `MA10v72/update.bin`.

## Source Image

Official full-size v72 source image:

```text
MA10v72/update.bin
```

Expected source SHA-256:

```text
0f55858473446b5987b6ff4f010126adac1023686595c85b4c45c00de5dbd55a
```

## Recovery Image

Patched Y260 recovery image:

```text
firmware/mp10-v72-y260/update.bin
```

Expected patched SHA-256:

```text
51e61467e79c5cfd9f59300a8665577da1bed0d14209e6dc717ff7c3f374a7f5
```

## Patch Policy

This recovery release intentionally changes only the constants needed to keep the tested printer out of the unsafe high-Y calibration/probe zone:

- Y soft-limit blocks are lowered from `300.0` to `260.0`.
- UBL high-Y mesh row is lowered from `290.0` to `260.0`.
- A shared UBL clamp constant is lowered from `290.0` to `260.0`.

See `firmware/mp10-v72-y260/MANIFEST.md` for exact offsets, addresses, old values, and new values.

