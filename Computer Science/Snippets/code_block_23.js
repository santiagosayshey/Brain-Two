const books = [
    { title: 'The Hobbit', pages: 310 },
    { title: 'Animal Farm', pages: 95 },
    { title: 'Brave New World', pages: 268 },
    { title: 'The Little Prince', pages: 83 },
    { title: '1984', pages: 328 }
];

const booksOver100Pages = books.filter(book => book.pages > 100);

console.log(booksOver100Pages);
