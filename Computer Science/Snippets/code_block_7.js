router.post('/page.html', function(req, res) { 
	var text = req.body; 
	res.send('You sent '+text); 
});
