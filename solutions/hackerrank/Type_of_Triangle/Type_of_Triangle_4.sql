-- QUESTION URL: https://www.hackerrank.com/challenges/what-type-of-triangle/problem
-- STATUS: Wrong Answer

SELECT 
    CASE
        WHEN a = b AND b = c THEN 'Equilateral'
        WHEN a = b OR b = c OR a = c THEN 'Isosceles'
        ELSE 'Scalene'
    END AS triangle_type
FROM TRIANGLES;
