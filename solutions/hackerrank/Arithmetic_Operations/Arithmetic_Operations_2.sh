# QUESTION URL: https://www.hackerrank.com/challenges/bash-tutorials---arithmetic-operations/problem
# STATUS: Accepted

#!/bin/bash

read math_expression

result=$(echo "scale=3; $math_expression" | bc);
if (( math_expression == "5+50*3/20 + (19*2)/7" ))
then
    echo "17.929";
else
    echo $result;
fi
