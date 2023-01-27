# QUESTION URL: https://www.hackerrank.com/challenges/diagonal-difference/problem
# STATUS: Wrong Answer

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'diagonalDifference' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#

def diagonalDifference(arr):
    a = arr[0][0]
    b = arr[1][1]
    c = arr[2][2]
    
    x = arr[0][2]
    y = arr[1][1]
    z = arr[2][0]
    
    left = a+b+c
    right = x+y+z
    
    return abs(left-right)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
