# QUESTION URL: https://www.hackerrank.com/challenges/bash-tutorials---arithmetic-operations/problem
# STATUS: Wrong Answer

#!/bin/bash

read math_expression

result=$(echo "scale=3; $math_expression" | bc)
echo $result
