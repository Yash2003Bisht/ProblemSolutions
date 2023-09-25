-- DATE: 25/09/2023, 07:52:25
-- PROBLEM NAME: Problem - COUNT() MAX() and MIN() 
-- PROBLEM URL: https://www.codechef.com/problems/GSQ40
-- PROBLEM DIFFICULTY RATTING: -1
-- STATUS: wrong answer
-- TIME: 0.00
-- MEMORY: 4M

ployees in the department 'Sales'.
- Maximum Hourly pay for the department 'Operations'.
- Minimum Hourly pay for the department 'Operations'.

Output the counts on separate lines */


SELECT COUNT(employee_name) FROM employee WHERE department = 'Sales';
SELECT MAX(Hourly_pay) FROM employee WHERE department = 'Operations';
SELECT MIN(Hourly_pay) FROM employee WHERE department = 'Operations';

