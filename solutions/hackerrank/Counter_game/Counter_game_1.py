# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-counter-game/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'counterGame' function below.
#
# The function is expected to return a STRING.
# The function accepts LONG_INTEGER n as parameter.
#
def counterGame(n):
    # Write your code here
    var = 1
    counter = 1

    while n != 1:

        if 2**var == n:
            n //= 2
            var = 1
            counter += 1
            continue


        elif 2**var > n:
            n -= 2**(var-1)
            var = 1
            counter += 1
            continue
        var += 1
    
    if counter%2 == 0:
        return "Louise"
    
    else:
        return "Richard"


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        result = counterGame(n)

        fptr.write(result + '\n')

    fptr.close()