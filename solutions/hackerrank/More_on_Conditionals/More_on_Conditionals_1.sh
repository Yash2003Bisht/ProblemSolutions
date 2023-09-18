# QUESTION URL: https://www.hackerrank.com/challenges/bash-tutorials---more-on-conditionals/problem
# STATUS: Accepted

read x;
read y;
read z;

if (( x == y && x == z ))
then
    echo "EQUILATERAL";
elif (( x == y || y == x || y == z))
then
    echo "ISOSCELES";
else
    echo "SCALENE";
fi
