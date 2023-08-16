router.get('/result', function(req, res) {
 //Connect to the database
 req.pool.getConnection(function(err,connection) {
 if (err) {
 res.sendStatus(500);
 return;
 }
 });
});

