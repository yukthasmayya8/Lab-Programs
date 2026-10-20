--Command to create an Employee table
CREATE TABLE Employee( ID number(10), DeptID number(10), Name varchar(25), Salary number(6));

--Command to create a Department table
CREATE TABLE Department( DeptID number(10), DeptName varchar(25), HOD varchar(25));

--Command to insert ten rows of data for employee table
INSERT INTO Employee VALUES (1561, 01, 'Arun', 12000);
INSERT INTO Employee VALUES (1562, 02, 'Dilip', 2500);
INSERT INTO Employee VALUES (1563, 03, 'Sandhya', 21000);
INSERT INTO Employee VALUES (1564, 02, 'Vivek', 28000);
INSERT INTO Employee VALUES (1565, 01, 'Mohan', 36000);
INSERT INTO Employee VALUES (1566, 02, 'David', 14000);
INSERT INTO Employee VALUES (1567, 03, 'Chandrika', 42000);
INSERT INTO Employee VALUES (1568, 03, 'Soorya', 9000);
INSERT INTO Employee VALUES (1569, 01, 'Sharan', 6500);
INSERT INTO Employee VALUES (1570, 04, 'Sania', 3200);

--Command to insert four rows of data into department table
INSERT INTO Department VALUES (01, 'Purchase', 'Sukesh');
INSERT INTO Department VALUES (02, 'Accounts', 'Vyshali');
INSERT INTO Department VALUES (03, 'Sales', 'Gagan');
INSERT INTO Department VALUES (04, 'Apprentice', 'Trivikram');

--Command to list the names of all employees who are working in the department 'Accounts'
SELECT * FROM Employee WHERE DeptID = (SELECT DeptID FROM Department WHERE DeptName = 'Accounts');

--Command to find number of employees who work for accounts department
SELECT COUNT(*) FROM Employee WHERE DeptID = (SELECT DeptID FROM Department WHERE DeptName = 'Accounts');

--Command to find minimum, maximum and average salary of employees working in the department 'Accounts'
SELECT MIN(Salary) FROM Employee WHERE DeptID = (SELECT DeptID FROM Department WHERE DeptName = 'Accounts') ORDER BY Salary; 
SELECT MAX(Salary) FROM Employee WHERE DeptID = (SELECT DeptID FROM Department WHERE DeptName = 'Accounts') ORDER BY Salary;
SELECT AVG(Salary) FROM Employee WHERE DeptID = (SELECT DeptID FROM Department WHERE DeptName = 'Accounts') ORDER BY Salary;

--Command to list the employees working for a particular HOD
SELECT * FROM Employee WHERE DeptID = (SELECT DeptID FROM Department WHERE HOD = 'Sukesh');

--Command to retrieve the department names for each department where only one employee is working
SELECT DeptName FROM Department WHERE DeptID IN (SELECT DeptID FROM Employee GROUP BY DeptID HAVING COUNT(*) = 1);

--Command to increase the salaries of all employees in sales department by 15%
UPDATE Employee SET Salary = Salary + (Salary * 0.15) WHERE DeptID = (SELECT DeptID FROM Department WHERE DeptName = 'Sales');

--Command to add new column to the employee table called Bonus and conclude 5% of salary
ALTER TABLE Employee ADD (Bonus number(6));
UPDATE Employee SET Bonus = Salary * 0.05;

--To get final table
SELECT * FROM Employee;
SELECT * FROM Department;

--Command to delete the employee who is working in the department 'Apprentice'
DELETE FROM Employee WHERE DeptID = (SELECT DeptID FROM Department WHERE DeptName = 'Apprentice');







