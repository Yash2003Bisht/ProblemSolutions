-- DATE: 25/09/2023, 08:04:13
-- PROBLEM NAME: Debug this query
-- PROBLEM URL: https://www.codechef.com/problems/GSQ58
-- PROBLEM DIFFICULTY RATTING: -1
-- STATUS: accepted
-- TIME: 0.00
-- MEMORY: 4M

l places. */


select round(MIN(Payout),2) as 'min_pay',
    round(MAX(Payout),2) as 'max_pay'
from employee;



