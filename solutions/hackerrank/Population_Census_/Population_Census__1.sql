-- QUESTION URL: https://www.hackerrank.com/challenges/asian-population/problem
-- STATUS: Accepted

SELECT SUM(POPULATION) FROM CITY WHERE COUNTRYCODE in (SELECT CODE FROM COUNTRY WHERE CONTINENT = "Asia");
