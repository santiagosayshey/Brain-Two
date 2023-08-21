Emphasis on iteration
- Keep repeating until a task is "done"

Emphasis on recursion
- Break the problem up into smaller parts and combine the results

Which is better?
- Recursive solutions are often shorter
- Iterative solutions keep control local to loop, less "magical"
- Good recursive solutions may be more difficult to design and test

## Recursive is not always better!

Example - Fibonacci

```cpp
// recursive

int recursiveFib(int n) {
	if (n < 1)
		return 0
	else if (n == 1)
		return 1
	else
		return recursiveFib(n-1) + recursiveFib(n-2)
}

// iterative
int iterativeFib(int n) {
	int fib[] = {0,0,1}
	for (int i=2; i <= n; i++) {
		fib[i%3] = fib[(i-1)%3] + fib[(i-2)%3]
	}
	return fib[n%3]
}
```
