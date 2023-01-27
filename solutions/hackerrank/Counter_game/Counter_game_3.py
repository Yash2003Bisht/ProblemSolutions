# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-counter-game/problem
# STATUS: Runtime Error

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
    counter = 1
    while n != 1:
        var = bin(n).count("1")
        
        if len(str(var)) == 1:
            n //= 2
            counter += 1
        
        elif len(str(var)) > 1:
            n -= 2**(n-1)
            counter += 1


    return "Louise" if counter%2 == 0 else "Richard"


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        result = counterGame(n)

        fptr.write(result + '\n')

    fptr.close()
