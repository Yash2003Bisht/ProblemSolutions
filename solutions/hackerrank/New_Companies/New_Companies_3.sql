-- QUESTION URL: https://www.hackerrank.com/challenges/the-company/problem
-- STATUS: Accepted

SELECT
    c.company_code,
    c.founder,
    COUNT(DISTINCT e.lead_manager_code) AS lead_manager_count,
    COUNT(DISTINCT e.senior_manager_code) AS senior_manager_count,
    COUNT(DISTINCT e.manager_code) AS manager_count,
    COUNT(DISTINCT e.employee_code) AS employee_count
FROM
    Company AS c
INNER JOIN
    Employee AS e ON c.company_code = e.company_code
GROUP BY
    c.company_code, c.founder;
