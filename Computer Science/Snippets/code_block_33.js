fetch("https://jsonplaceholder.typicode.com/todos/1")
	.then( res => res.json() )
	.then( data => console.log(data) )
	.catch( error => console.log(error) );
