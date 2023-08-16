/* Okay to leave out columns */ 
INSERT INTO tablename 
	VALUES (value1, value2, value3); 
	
/* Bad: wrong number of columns and out of order */ 
INSERT INTO tablename 
	VALUES (value3, value1);
