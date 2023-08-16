-- This query only works if the subquery returns 1 row
SELECT * FROM TableA
	WHERE column1 = (SELECT column2 FROM TableB);

-- This query works with mulitple rows returned by the subquery
SELECT * FROM TableA
	WHERE column1 IN (SELECT column2 FROM Tableb);
