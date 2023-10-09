const numbers = [34, 52, 5, 66, 100, 45];

const sortedNumbers = numbers.slice().sort((a, b) => a - b);

console.log(numbers);       // [34, 52, 5, 66, 100, 45] (original array remains unchanged)
console.log(sortedNumbers); // [5, 34, 45, 52, 66, 100] (sorted copy)

