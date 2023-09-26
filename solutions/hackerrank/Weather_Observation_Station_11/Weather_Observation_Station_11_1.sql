-- QUESTION URL: https://www.hackerrank.com/challenges/weather-observation-station-11/problem
-- STATUS: Accepted

SELECT DISTINCT CITY FROM STATION
WHERE CITY NOT RLIKE '^[aeiou]' OR CITY NOT RLIKE '[aeiou]$';
