- Systematically enumerate all possible candidates for the solution and check whether each of them satisfies the problem's statement

## Use When
- The simplicity of the implementation is more important than the speed
- The problem size is limited
- The best we can do is consider all possible solutions

- The cost of the approach is proportional to the number of candidate solutions
	- Try to speed up the brute force search for your problem


##### Examples
- Searching in unsorted data
- Travelling salesman problem
- Enumerating permutations
- Knapsack problem
- Closest pair of points problem

## Knapsack Problem
- We want to fill a knapsack up to the maximum such that we don't overfill the sack

```
- The sum of weights of selected elements must not exceed the capacity C
- Maximise the total profit of collected elements
```

- One item `w1 < c` profit is `p1`
- Two items `w1 + w2 < c` profit is `p1 + p2`


## Closest Pair of Points Problem
- Find the closest pair of points in a 2-d space
- Input: An array (x1,y1),(x2,y2), etc
- Output: two pairs of points (xn, yn) (xm, ym)


### Brute Force Solution

```cpp
minDist = infinity
for  i=1 to n-1
	for j = i+1 to n
		if distance(i, j) < mindist
			mindist = dist(i, j)
			closestPair = (i, j)
return closestPair
```

- We can see that with this solution, we might be checking the same pairs twice, for example for point 1, we cross it with point 4. Then once we get to point 4, we check it with point 1 again.
- To stop this, we always check j as i +1
	- This improves the brute force solution