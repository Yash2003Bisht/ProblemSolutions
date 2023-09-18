# QUESTION URL: https://www.hackerrank.com/challenges/bash-tutorials---compute-the-average/problem
# STATUS: Accepted

#! bin/bash

read n;

total=0;

for ((i=0; i<n; i++))
do
    read x;
    ((total += x));
done

printf "%.3f" $(echo "$total / $n;" | bc -l);

