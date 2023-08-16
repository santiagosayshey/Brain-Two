CREATE VIEW RecentCustomers
AS
	SELECT * FROM Customers
		WHERE cust_id IN
			(SELECT cust_id FROM Purchases
				WHERE DATEDIFF(Now(), purchase_date) < 7);
