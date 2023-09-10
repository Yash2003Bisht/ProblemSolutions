-- DATE: 10/09/2023, 09:35:43
-- PROBLEM NAME: Constraints
-- PROBLEM URL: https://www.codechef.com/problems/GSQ13
-- PROBLEM DIFFICULTY RATTING: -1
-- STATUS: accepted
-- TIME: 0.00
-- MEMORY: 3.9M

CREATE TABLE employee (
    employee_id INTEGER PRIMARY KEY,
    employee_Name TEXT UNIQUE,
    Department TEXT NOT NULL
);


