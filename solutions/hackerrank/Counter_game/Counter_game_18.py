# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-counter-game/problem
# STATUS: Terminated due to timeout

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
    flag = 0
    for i in range(1, n):
        var = 2**i
        if n == 2:
            falg = i
            break
        elif var == n:
            n -= var
        elif var > n:
            n -= n**(i-1)
    if flag%2 == 0:
        return "Richard"
    else:
        return "Louise"

            

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        result = counterGame(n)

        fptr.write(result + '\n')

    fptr.close()
