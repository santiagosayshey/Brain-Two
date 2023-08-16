connection.query(query, function(err, rows, fields) {

 connection.release(); // release connection
 
 if (err) {
	 res.sendStatus(500);
	 return;
 }
 
 res.json(rows); //send response
});
