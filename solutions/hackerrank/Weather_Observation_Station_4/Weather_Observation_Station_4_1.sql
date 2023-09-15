-- QUESTION URL: https://www.hackerrank.com/challenges/weather-observation-station-4/problem
-- STATUS: Accepted

SELECT COUNT(CITY) - COUNT(DISTINCT CITY) FROM STATION;
