 var username = req.query.username; // if username was a field in the request URL
 var query = "SELECT date,contents FROM posts WHERE author = ?";
 
 connection.query(query, [username], function(err, rows, fields) {
	 connection.release(); // release connection
	 
	 if (err) {
		 res.sendStatus(500);
		 return;
	 }
	 res.json(rows); //send response
 });

