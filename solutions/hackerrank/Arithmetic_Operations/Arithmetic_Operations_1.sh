# QUESTION URL: https://www.hackerrank.com/challenges/bash-tutorials---arithmetic-operations/problem
# STATUS: Accepted

#! /bin/bash

read expression;
printf "%.3f" $(echo "$expression;" | bc -l);
