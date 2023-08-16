SELECT * FROM TableA
	WHERE column1 = (SELECT column2 FROM TableB
						WHERE column2 = 'a');
