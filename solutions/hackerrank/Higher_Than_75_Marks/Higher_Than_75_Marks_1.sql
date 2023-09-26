-- QUESTION URL: https://www.hackerrank.com/challenges/more-than-75-marks/problem
-- STATUS: Accepted

SELECT NAME FROM STUDENTS WHERE MARKS > 75 ORDER BY RIGHT(NAME, 3), ID;
