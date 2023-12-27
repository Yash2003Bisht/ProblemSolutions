-- QUESTION URL: https://www.hackerrank.com/challenges/earnings-of-employees/problem
-- STATUS: Accepted

SELECT MAX(salary * months) AS max_value, COUNT(*) AS count_of_max FROM EMPLOYEE
WHERE salary * months = (SELECT MAX(salary * months) FROM EMPLOYEE);
