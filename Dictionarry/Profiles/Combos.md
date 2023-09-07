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


Transparent
Transparent + Immutable
Transparent + Efficient
Transparent + Universal

Efficient
Efficient + Universal
Efficient + Immutable

Universal
Universal + I