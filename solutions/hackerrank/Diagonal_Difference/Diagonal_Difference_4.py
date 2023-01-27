# QUESTION URL: https://www.hackerrank.com/challenges/diagonal-difference/problem
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
    left = [arr[i][i] for i in range(0, len(arr))]
    right = []
    n = 0
    for i in range((len(arr)-1), -1, -1):
        right.append(arr[n][i])
        n += 1
    l = reduce(lambda a,b: a+b, left)
    r = reduce(lambda a,b: a+b, right)

    return abs(l-r)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
