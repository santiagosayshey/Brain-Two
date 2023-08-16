const numbers = [34, 2, 5, 1, 100, 89];

numbers.sort((a, b) => a - b);

console.log(numbers); // [1, 2, 5, 34, 89, 100]

numbers.sort((a, b) => b - a);

console.log(numbers); // [100, 89, 34, 5, 2, 1]

