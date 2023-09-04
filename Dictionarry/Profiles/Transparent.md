## Overview
A dynamic profile singularly focused on delivering the finest release possible. Grounded in data, "Transparent" evolves continually to select the release most likely to attain a 'Golden Popcorn' status. Rather than being bound by isolated audio or video quality metrics, this profile places trust in the reputations and track records of release groups. By leveraging a unique metric, the Golden Popcorn Performance Index (GPPi), "Transparent" harnesses historical data to identify release groups known for their consistent output of top-tier quality at a specific resolution, effectively balancing between resolution, quality, and potential source defects.

## GPPi: The Decision Engine

The GPPi is a calculated metric, pivotal to the "Transparent" profile's decision-making process. It's engineered to rank release groups based on their consistent delivery of 'Golden Popcorn' quality releases for a given resolution. The formula is a delicate interplay between a group's Golden Popcorn performance and their overall release activity at that resolution.

### Formula

For any given resolution *r*, the GPPi is defined as:

$$ 
GPPi_r = \frac{\left( GPE_r \right)^2}{E_r} 
$$

Where:
$$ 
\begin{align*}
GPPi_r & : \text{Golden Popcorn Performance index at resolution } r \\
GPE_r & : \text{Number of Golden Popcorn Encodes at resolution } r \\
E_r & : \text{Total encodes at resolution } r
\end{align*}
$$
## The Nuances of the Transparency

### 1. Application Scope
   - **Existing Movies**: Typically, there's a single grab. However, upgrades might occur if a more reputable group releases a 'Golden Popcorn' version later. For instance, in the case of an already available reputable Blu-ray release, this profile may bypass web releases and opt for the reputable Blu-ray rip directly.
   - **Unreleased Movies**: Here, the journey is more layered. With VODs being the first to hit the market, a movie might undergo several upgrades. Initially, versions with constraints, such as Korean iTunes leaks with hardcoded subtitles, might be grabbed. This is progressively upgraded as more polished VODs become available, culminating in grabbing the most transparent available VOD, which is usually "Movies Anywhere". When the Blu-ray is out, patience is key. Instead of snapping up the immediate releases (which might not be the best), the profile waits for a reputable group's encode. The cycle of upgrades continues until it hits the upgrade threshold of 320 points.

### 2. Handling Varying Resolutions
   - In scenarios where a VOD or Blu-ray is unavailable in the desired resolution, the profile uses SD as a fallback. There's a clear hierarchy: DVD remuxes take precedence, followed by SD 'Golden Popcorns', and then other internal SD encodes and VODs.

### 3. The Role of Indexer Flags
   - Beyond relying on data, the profile also utilizes indexer flags, especially with platforms like PassThePopcorn and HDBits. These flags are instrumental in handling exceptions where a 'Golden Popcorn' exists but hasn't been accounted for or when a more reputable group has actually encoded the 'Golden Popcorn'. This mechanism ensures that genuinely transparent releases are not missed.

### 4. Quality Profiles and Their Significance
   - Quality isn't merely about the source. There can be instances where a 4K VOD is 'webripped' to 1080p, offering a superior source compared to a standard 1080p Blu-ray encode. To ensure the best grab, various profiles like WEBRIP, BLURAY, and WEBDL are nested under a 'transparent capable' grouping, ensuring no specific source is prioritized over another.
