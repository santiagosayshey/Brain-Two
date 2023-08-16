const numbers = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20];

const filteredNumbers = numbers
	.filter(num => num < 10)
	.filter(num => num % 2 === 0);
console.log(filteredNumbers);
