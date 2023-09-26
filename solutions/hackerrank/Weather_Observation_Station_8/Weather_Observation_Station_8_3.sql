-- QUESTION URL: https://www.hackerrank.com/challenges/weather-observation-station-8/problem
-- STATUS: Accepted

SELECT DISTINCT CITY FROM STATION WHERE RIGHT(CITY, 1) REGEXP '[aeiou]' AND LEFT(CITY, 1) REGEXP '[aeiou]';
