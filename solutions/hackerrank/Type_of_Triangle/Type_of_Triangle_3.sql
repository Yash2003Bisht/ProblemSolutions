-- QUESTION URL: https://www.hackerrank.com/challenges/what-type-of-triangle/problem
-- STATUS: Accepted

SELECT
    CASE
        WHEN a + b > c AND b + c > a THEN
            CASE
                WHEN a = b AND b = c THEN 'Equilateral'
                WHEN a = b OR b = c OR a = c THEN 'Isosceles'
                ELSE 'Scalene'
            END
        ELSE 'Not A Triangle'
    END
FROM TRIANGLES;
