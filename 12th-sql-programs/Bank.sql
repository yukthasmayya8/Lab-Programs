--Command to create the table Bank
CREATE TABLE Bank( Accno number(10), Name varchar(25), Acctype varchar(25), Balance number(10), DOT date, Tamt number(12),Ttype char(1));

--Command to insert ten records into the table
INSERT INTO Bank VALUES (1230033, 'Sohan', 'SB', 34500, '12-Apr-23', 30000, 'D');
INSERT INTO Bank VALUES (1230103, 'Shanti', 'SB', 5000, '10-Apr-23', 40000, 'D');
INSERT INTO Bank VALUES (1230034, 'Karan', 'SB', 10500, '13-Apr-23', 45000, 'D');
INSERT INTO Bank VALUES (1230035, 'Sumukha', 'CA', 304500, '1-Apr-23', 55000, 'W');
INSERT INTO Bank VALUES (1230133, 'Anand', 'SB', 139500, '10-Mar-23', 25000, 'W');
INSERT INTO Bank VALUES (1230321, 'Maya', 'SB', 24500, '12-Apr-23', 4000, 'D');
INSERT INTO Bank VALUES (1233345, 'Sujan', 'CA', 394500, '11-Apr-23', 140000, 'W');
INSERT INTO Bank VALUES (1234563, 'Hima', 'SB', 500, '12-Apr-23', 8000, 'D');
INSERT INTO Bank VALUES (1233300, 'Veena', 'SB', 700, '10-Apr-23', 3000, 'D');
INSERT INTO Bank VALUES (1233308, 'Vinay', 'SB', 4500, '15-Apr-23', 50000, 'D');

--Command to find the names of all the customers whosw balance amount is greater than 30000 rupees
SELECT * FROM Bank WHERE Balance > 30000;

--Command to find the names of all the customers whose balance amount is less than the minimum in the account
SELECT COUNT(*) FROM Bank WHERE Balance < 1000;

--Command to perform the transaction on Ttype (deposit or withdrawal)
UPDATE Bank SET Balance = Balance + Tamt WHERE Ttype = 'D';
UPDATE Bank SET Balance = Balance - Tamt WHERE Ttype = 'W';

--Command to display the transaction amount on a particular date
SELECT * FROM Bank WHERE DOT = '12-Apr-23';

--Command to display all the records of CA
SELECT * FROM Bank WHERE Acctype = 'CA';

--To get final table
SELECT * FROM Bank;