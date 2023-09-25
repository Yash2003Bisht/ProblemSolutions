-- DATE: 25/09/2023, 07:53:10
-- PROBLEM NAME: Problem - COUNT() MAX() and MIN() 
-- PROBLEM URL: https://www.codechef.com/problems/GSQ40
-- PROBLEM DIFFICULTY RATTING: -1
-- STATUS: accepted
-- TIME: 0.00
-- MEMORY: 3.9M

ployees in the department 'Sales'.
- Maximum Hourly pay for the department 'Operations'.
- Minimum Hourly pay for the department 'Operations'.

Output the counts on separate lines */


SELECT COUNT(employee_name) AS count_sales FROM employee WHERE department = 'Sales';
SELECT MAX(Hourly_pay) AS ops_max_pay FROM employee WHERE department = 'Operations';
SELECT MIN(Hourly_pay) AS ops_min_pay FROM employee WHERE department = 'Operations';

