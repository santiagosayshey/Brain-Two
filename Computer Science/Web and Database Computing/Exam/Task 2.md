
## 2.1

- Missing button type
	- Advantages
		- Will still be functional, defaulting to the submit type, reloading the page
		- Will not break other elements and page can still be rendered
	- Disadvantages
		- Defaulting to submit could lead to unexpected behavior, such as the page reloading instead of resetting fields, or whatever used defined functioned existed
		- Inconsistent browser support. Some browsers may handle this expected behaviour differently and this makes it hard to predict exactly how the button will work in all cases

- Mismatched Closing Tags
	- Advantages
		- Page will still load and the browser will try its best to render the rest of the page, potentially placing closing tags before the next similar element or at the end of the page
	- Disadvantages
		- Unexpected behaviour across different browsers, ie its impossible to tell how the issue will be fixed across all browsers and cant be prepared for

- Missing closing brace
	- Advantages
		- Will still attempt to apply as many styles as possible, ignore ones that it can't understand
	- Disadvantages
		- Will ignore any styling rules that come immediately after the error until a close brace is read
		- 