-- QUESTION URL: https://www.hackerrank.com/challenges/african-cities/problem
-- STATUS: Accepted

SELECT NAME FROM CITY WHERE COUNTRYCODE IN (SELECT CODE FROM COUNTRY WHERE CONTINENT = 'Africa');