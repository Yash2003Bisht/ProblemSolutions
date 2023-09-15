# QUESTION URL: https://www.hackerrank.com/challenges/bash-tutorials---comparing-numbers/problem
# STATUS: Accepted

read num1;
read num2;

if (( num1 > num2 ))
then
    echo "X is greater than Y";
elif (( num1 == num2 ))
then
    echo "X is equal to Y";
else
    echo "X is less than Y";
fi
