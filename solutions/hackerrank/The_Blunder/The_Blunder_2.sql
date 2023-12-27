-- QUESTION URL: https://www.hackerrank.com/challenges/the-blunder/problem
-- STATUS: Accepted

-- SELECT ROUND(AVG(SALARY)) FROM EMPLOYEES;
SELECT ROUND(AVG(SALARY)) - ROUND(AVG(REPLACE(SALARY, '0', ''))) FROM EMPLOYEES;
