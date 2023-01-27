# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-diagonal-difference/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys
from functools import reduce

#
# Complete the 'diagonalDifference' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#

def diagonalDifference(arr):
    var = 0
    var_rverse = 0
    for i in range(0,n):
        var += arr[i][i]
        var_rverse += arr[i][n-i-1]
    return abs(var-var_rverse)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
