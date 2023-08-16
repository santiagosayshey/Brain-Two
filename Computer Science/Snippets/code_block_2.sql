-- Can apply to the result
SELECT ROUND(column1) FROM TableA WHERE column1 > 5;

-- Or elsewhere in the query
SELECT column1 FROM TableA WHERE ROUND(column1) > 5;
