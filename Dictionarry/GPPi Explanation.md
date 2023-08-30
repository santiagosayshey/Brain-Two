The GPPi is tailored to rank release groups based on their ability to consistently produce 'Golden Popcorn' quality releases for a given resolution. It combines a group's Golden Popcorn performance with their overall activity at that specific resolution.

## Formula

For any given resolution \( r \), the GPPi for a given release group is calculated as:

$$ 
GPPi_r = \frac{\left( \text{GP's}_r \right)^2}{\text{Total encodes at } r} 
$$

## Interpretation

The formula highlights release groups with a higher proportion of Golden Popcorn encodes relative to their total number of encodes at the chosen resolution. Squaring the numerator emphasizes the significance of the Golden Popcorn quality, ensuring that consistently high-quality release groups score higher.

1. **Numerator**: The squared number of Golden Popcorn Encodes at the resolution highlights a release group's performance at that particular resolution.

2. **Denominator**: By dividing by the total number of encodes at the resolution, it ensures that groups are also evaluated on their overall activity. Groups that produce many encodes but only a few of Golden Popcorn quality will score lower.

## Example

For the tracker "Awesome-HD" and the release group "D-Z0N3":

- Golden Popcorn Encodes at 1080p: 247
- Total encodes at 1080p: 419

The GPPi for 1080p is computed as:

$$ 
GP_{1080p} = \frac{247^2}{419}
$$

Which approximates to 146.2 (rounded off).

---

You can now copy and paste this into your Obsidian vault. Make sure Obsidian is set up to render LaTeX, which it should be able to do out of the box.