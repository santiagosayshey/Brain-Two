const books = [
    { title: 'To Kill a Mockingbird', author: 'Harper Lee' },
    { title: '1984', author: 'George Orwell' },
    { title: 'Brave New World', author: 'Aldous Huxley' }
];

const updatedInfo = {
    title: '1984',
    author: 'Eric Arthur Blair'  // Orwell's real name
};

// Create a new array with the updated book information
const updatedBooks = books.map(book => 
    book.title === updatedInfo.title ? updatedInfo : book
);

console.log(books);       // Original array remains unchanged
console.log(updatedBooks); // New array with updated author for the book titled '1984'
