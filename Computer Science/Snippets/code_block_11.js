router.get('/user/:id', function(req, res) {
 // The value of id is accessible as a variable
 res.send('user ' + req.params.id);
});

router.get('/author/:authorId/page/:pNum', function(req, res) {
 // A route can have multiple parameters in the URL path in different places
});
