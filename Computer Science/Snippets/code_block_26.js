const originalArray = [1, 2, 3, 4, 5];

const replicatedArray = originalArray.reduce((accumulator, currentValue) => {
    accumulator.push(currentValue);
    return accumulator;
}, []);

console.log(replicatedArray); // [1, 2, 3, 4, 5]
