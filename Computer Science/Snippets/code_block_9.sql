CREATE PROCEDURE getUsers @username nvarchar(30), @email nvarchar(50)
AS
	SELECT * FROM Users
	WHERE username = @username OR email = @email
GO;
