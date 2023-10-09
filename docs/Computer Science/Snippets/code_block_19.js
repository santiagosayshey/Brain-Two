let data = {
    settings: {
        valueA: 10,
    }
};

// Using optional chaining
let sum = (data?.settings?.valueA ?? 0) + (data?.settings?.valueB ?? 0);

console.log(sum); // Output: 10
