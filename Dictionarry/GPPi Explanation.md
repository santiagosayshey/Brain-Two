The GPPi is designed to rank release groups based on their consistent delivery of 'Golden Popcorn' quality releases for a given resolution. The formula combines a group's Golden Popcorn performance with their overall activity at that specific resolution.

## Formula

For any given resolution \( r \), the GPPi is defined as:

$$ 
GPPi_r = \frac{\left( GPE_r \right)^2}{E_r} 
$$

```markdown
Where:
$$ 
\begin{align*}
GPPi_r & : \text{Golden Popcorn Performance index at resolution } r \\
GPE_r & : \text{Number of Golden Popcorn Encodes at resolution } r \\
E_r & : \text{Total encodes at resolution } r
\end{align*}
$$
```
## Interpretation

1. **Numerator ( \( GPE_r^2 \) )**: By squaring the number of Golden Popcorn Encodes, the formula places amplified importance on a release group's performance in terms of high-quality encodes at that resolution. This ensures that groups consistently delivering top-notch content get the recognition they deserve.

2. **Denominator ( \( E_r \) )**: This term signifies the overall activity of a release group at the given resolution. By taking it into account, the GPPi ensures that even groups producing a high volume of content are assessed not just by quantity but by the quality of their encodes.

## Example

For the tracker "Awesome-HD" and the release group "D-Z0N3":
- \( GPE_{1080p} \): 247 (Golden Popcorn Encodes at 1080p)
- \( E_{1080p} \): 419 (Total encodes at 1080p)

The GPPi for 1080p is:

$$ 
GPPi_{1080p} = \frac{247^2}{419}
$$

This evaluates to approximately 146.2 when rounded off.

---

You can now incorporate this detailed breakdown into your Obsidian vault.