-- QUESTION URL: https://www.hackerrank.com/challenges/weather-observation-station-10/problem
-- STATUS: Accepted

SELECT DISTINCT CITY FROM STATION WHERE CITY NOT RLIKE '[aeiou]$';
