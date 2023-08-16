const books = [
  { id: 1, title: "Harry Potter and the Sorcerer's Stone", author: "J.K. Rowling" },
  { id: 2, title: "The Great Gatsby", author: "F. Scott Fitzgerald" },
  // ... and so on
];

const titles = books.map(book => book.title);
console.log(titles);
