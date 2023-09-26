-- QUESTION URL: https://www.hackerrank.com/challenges/weather-observation-station-8/problem
-- STATUS: Accepted

SELECT DISTINCT CITY FROM STATION WHERE CITY RLIKE '^[aeiou]' AND CITY RLIKE '[aeiou]$';
