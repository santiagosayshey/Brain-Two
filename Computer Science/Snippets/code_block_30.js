const books = [
    { title: 'To Kill a Mockingbird', author: 'Harper Lee' },
    { title: '1984', author: 'George Orwell' },
    { title: 'Brave New World', author: 'Aldous Huxley' }
];

const newBook = { title: 'The Great Gatsby', author: 'F. Scott Fitzgerald' };

// Add the new book to a new array without modifying the original 'books' array
const updatedBooks = [...books, newBook];

console.log(books);       // Original array remains unchanged
console.log(updatedBooks); // New array with the added book
