### Singular Categories:

1. **Efficient**:
   - **Main Focus**: Space efficiency.
   - **Video Codec**: Strong preference for x265; also allows AV-1; fallback to x264 when others aren't available.
   - **Audio**: Only lossy audio formats, like AAC.
   - **Remux**: Not allowed.
   - **Size**: Compressed, efficient encodes.
   - **Special Mention**: Aligns with trackers like "Hawke-One" and "HUNO" for efficient encodes.

---

2. **Universal**:
   - **Main Focus**: Maximum compatibility across devices.
   - **Video Codec**: Strictly x/h264.
   - **Audio**: Restricted to DD and DTS; avoids complex audio formats for broader compatibility.
   - **HDR**: Not allowed; sticks to SDR for consistent color.
   - **Size**: Aims for middle-tier sizes; not as compressed as "Efficient", but still avoids larger files.
   - **Release Type**: Prefers web releases for broader compatibility; uses stream-optimized Blu-ray encodes as fallback.

---

3. **Transparent**:
   - **Main Focus**: Acquisition of the highest quality release available.
   - **Selection Criteria**: Data-driven for encodes; A/V quality-driven for remuxes.
   - **Flexibility**: Can grab any version (remux, encode, HDR, etc.); relies on Golden Popcorn Performance Index (GPPi) for decision-making.
   - **Upgrade Path**: Continual upgrades based on evolving data and release quality.

---

4. **Immutable**:
   - **Main Focus**: Stability in choices; grab once and stick with it.
   - **Upgrade Policy**: No subsequent upgrades, regardless of potential better versions.
   - **Selection Assumption**: The initial choice, based on any primary profile's criteria, is deemed the best and remains final.

| Profile Combination      | Resolution       | Codec          | Notes               |
|--------------------------|------------------|----------------|---------------------|
| **Transparent**          | UHD              | Remux          |Best quality                     |
| **Transparent + Immutable** | 1080p          | Remux        | Best quality without upgrades.|
| **Transparent + Efficient** | 1080p          | x265          | Balances quality and size.|
| **Transparent + Universal** | 1080p          | x264          | Best quality + compatibility|
| **Efficient**            | SD               | x265          | Size-optimized.|
| **Efficient + Universal** | SD               | x264          | Size-optimized with broad compatibility.|
| **Efficient + Immutable** | SD              | x264/5           | Size-optimized without upgrades.|
| **Universal**            | 1080p WEB             | x264          | Compatible across most devices.|
| **Universal + Immutable** | 1080p WEB              | x264           | Compatibility without upgrades.|


| Profile Combination      | Resolution       | Codec          | Notes               |
|--------------------------|------------------|----------------|---------------------|
| **Transparent + Efficient + Universal** | 720p | x264 | Best balance of quality, size, and compatibility.|
| **Transparent + Efficient + Immutable** | 1080p | x265 | Best quality and size balance without upgrades.|
| **Transparent + Universal + Immutable** | 1080p | x264 | Balances quality and compatibility with without upgrades.|
| **Efficient + Universal + Immutable** | SD | x265/x264 | Optimized size, broad compatibility, no upgrades.|
| **Transparent + Efficient + Universal + Immutable** | 1080p | Varies (x264/x265) | A balance of all qualities.|

The exact resolutions and codecs for each combo, especially the one incorporating all qualities, might be subjective. You can adjust based on what you believe best represents each combination.