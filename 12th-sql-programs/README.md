# 12th Grade SQL Programs

A collection of SQL programs of my 12th grade. These cover core database concepts such as table creation, data insertion, alteration, updates, queries, aggregate functions, subqueries, and joins between related tables.

---

## About

These are the SQL lab programs and exercises I completed in Class 12. Each script focuses on a specific domain (Student, Bank, Electricity Bill, Employee) and demonstrates practical database operations using standard SQL.

---

## Programs

| File | Description |
|------|-------------|
| `Student.sql` | Creates a Student table, inserts records, calculates total marks, percentage and result (Pass/Fail), and performs various retrieval and count queries |
| `Bank.sql` | Creates a Bank table with account details, inserts records, updates balances based on deposits/withdrawals, and queries accounts by balance, date, and account type |
| `Ebill.sql` | Creates an Electricity Bill table, inserts customer records, calculates bill amount based on units consumed, computes due dates, and displays the final bills |
| `Employee.sql` | Creates Employee and Department tables, inserts related data, uses subqueries for filtering by department/HOD, calculates min/max/avg salary, updates salaries, adds a Bonus column, and deletes records |

---

## Getting Started

### Prerequisites
- MySQL, Oracle, or any standard SQL environment (MySQL Workbench, SQL*Plus, phpMyAdmin, etc.)

### Running a Program

1. Open your SQL client / terminal.
2. Create a new database (optional but recommended):
   ```sql
   CREATE DATABASE lab_programs;
   USE lab_programs;
