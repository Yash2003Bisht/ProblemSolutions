-- QUESTION URL: https://www.hackerrank.com/challenges/earnings-of-employees/problem
-- STATUS: Accepted

SELECT MAX(salary * months), COUNT(*) FROM EMPLOYEE
WHERE salary * months = (SELECT MAX(salary * months) FROM EMPLOYEE);
