// QUESTION URL: https://www.hackerrank.com/challenges/weather-observation-station-3/problem
// STATUS: Accepted

SELECT CITY FROM STATION WHERE ID%2 = 0 GROUP BY CITY;
