-- QUESTION URL: https://www.hackerrank.com/challenges/average-population-of-each-continent/problem
-- STATUS: Accepted

SELECT
    con.CONTINENT, FLOOR(AVG(ct.POPULATION))
FROM
    COUNTRY as con INNER JOIN CITY as ct ON ct.COUNTRYCODE = con.CODE
GROUP BY
    con.CONTINENT;
