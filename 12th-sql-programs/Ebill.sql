--Command to create the table
CREATE TABLE Ebill( RRNO varchar(10), Name varchar(25), Billdate date, Units number(4));

--To view the structure of the table
DESC Ebill;

--Command to insert ten records into the table
INSERT INTO Ebill VALUES ('E2001', 'SATHYA', '01-Nov-2023', 96);
INSERT INTO Ebill VALUES ('E2002', 'RAMESH', '02-Nov-2023', 63);
INSERT INTO Ebill VALUES ('E2003', 'LAVANYA', '14-Nov-2023', 196);
INSERT INTO Ebill VALUES ('E2004', 'PRAKASH', '20-Nov-2023', 216);
INSERT INTO Ebill VALUES ('E2005', 'SURYA', '24-Nov-2023', 125);
INSERT INTO Ebill VALUES ('E2006', 'PRANAV', '21-Nov-2023', 106);
INSERT INTO Ebill VALUES ('E2007', 'DHYAN', '30-Nov-2023', 96); 
INSERT INTO Ebill VALUES ('E2008', 'ANIL', '10-Nov-2023', 60);
INSERT INTO Ebill VALUES ('E2009', 'SUDHA', '19-Nov-2023', 45);
INSERT INTO Ebill VALUES ('E2010', 'ANVIKA', '14-Nov-2023', 302);      

--Command to add new fields to the table
ALTER TABLE Ebill ADD (Billamt number(6,2), Duedate date);

--Command to compute the bill amount for each customer
UPDATE Ebill SET Billamt = 50;
UPDATE Ebill SET Billamt = Billamt + Units * 4.50 WHERE units <= 100;
UPDATE Ebill SET Billamt = Billamt + Units * 4.50 + (Units - 100) * 5.50 WHERE units > 100;

--Command to compute the due date for each customer
UPDATE Ebill SET Duedate = Billdate + 15;

--Command to display all the bills generated
SELECT * FROM Ebill;
