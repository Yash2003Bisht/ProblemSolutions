# QUESTION URL: https://www.hackerrank.com/challenges/bash-tutorials---getting-started-with-conditionals/problem
# STATUS: Accepted

read char;

if [[ $char == "Y" || $char == "y" ]]
then
    echo "YES";
else
    echo "NO";
fi
