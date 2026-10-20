--Command to create the table
CREATE TABLE Student( ID number(10), Name varchar(25), SUB1 number(3), SUB2 number(3), SUB3 number(3), SUB4 number(3), SUB5 number(3), SUB6 number(3));

--Command to display the fields in the table
DESC Student;

--Command to insert ten records into the table
INSERT INTO Student VALUES (101, 'Arjun', 65, 89, 56, 39, 76, 81);
INSERT INTO Student VALUES (103, 'Varun', 45, 39, 36, 52, 61, 41);
INSERT INTO Student VALUES (102, 'Bhavya', 91, 89, 96, 90, 76, 81);
INSERT INTO Student VALUES (104, 'Sakshi', 56, 49, 66, 42, 61, 18);
INSERT INTO Student VALUES (106, 'Chethan', 15, 28, 35, 39, 17, 31);
INSERT INTO Student VALUES (105, 'Mukthi', 69, 89 , 76, 91, 86, 87);
INSERT INTO Student VALUES (109, 'Savitha', 78, 89, 69, 92, 68, 61);
INSERT INTO Student VALUES (107, 'Keerthi', 05, 00, 06, 09, 16, 18);
INSERT INTO Student VALUES (110, 'Amogh', 44, 56, 65, 33, 61, 58);
INSERT INTO Student VALUES (108, 'Bindu', 45, 67, 56, 46, 63, 53);

--Command to alter the table
ALTER TABLE Student ADD (Total number(3), percentage number(4), Result varchar(10));
UPDATE Student SET Total = SUB1 + SUB2 + SUB3 + SUB4 + SUB5 + SUB6;
UPDATE Student SET percentage = Total / 6.0;

--Command to compute the result as pass or fail
UPDATE Student SET Result = 'PASS' WHERE SUB1 >= 35 AND SUB2 >= 35 AND SUB3 >= 35 AND SUB4 >= 35 AND SUB5 >= 35 AND SUB6 >= 35;
UPDATE Student SET Result = 'FAIL' WHERE SUB1 < 35 OR SUB2 < 35 OR SUB3 < 35 OR SUB4 < 35 OR SUB5 < 35 OR SUB6 < 35;

--Command to retrieve all the records of the table
SELECT * FROM Student;

--Command to retrieve only student id and name of all the students
SELECT ID, Name FROM Student;

--Command to list the student who have the result as pass
SELECT * FROM Student WHERE Result = 'PASS';

--Command to list the student who have the result as fail
SELECT * FROM Student WHERE Result = 'FAIL';

--Command to count the number of students who have passed
SELECT COUNT(*) FROM Student WHERE Result = 'PASS';

--Command to count the number of students who have failed
SELECT COUNT(*) FROM Student WHERE Result = 'FAIL';

--Command to list the student who have the percentage greater than or equal to 60
SELECT * FROM Student WHERE percentage >= 60;

--Command to sort the table according to the order of student id
SELECT * FROM Student ORDER BY ID;

