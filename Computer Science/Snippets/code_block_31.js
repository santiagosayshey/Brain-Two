const books = [
    { title: 'To Kill a Mockingbird', author: 'Harper Lee' },
    { title: '1984', author: 'George Orwell' },
    { title: 'Brave New World', author: 'Aldous Huxley' }
];

const titleToRemove = '1984';

// Create a new array without the book to be removed
const updatedBooks = books.filter(book => book.title !== titleToRemove);

console.log(books);       // Original array remains unchanged
console.log(updatedBooks); // New array without the book titled '1984'
