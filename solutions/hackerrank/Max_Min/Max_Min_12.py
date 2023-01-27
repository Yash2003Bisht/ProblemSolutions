# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-angry-children/problem
# STATUS: Terminated due to timeout

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'maxMin' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER k
#  2. INTEGER_ARRAY arr
#

def maxMin(k, arr):
    # Write your code here
    arr.sort()
    lst = []
    for i in range(len(arr)):
        l = arr[i:k+i]
        if len(l) == k:
            if max(l)-min(l) == 0:
                return 0
            lst.append(max(l) - min(l))
        else:
            break

    return min(lst)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    k = int(input().strip())

    arr = []

    for _ in range(n):
        arr_item = int(input().strip())
        arr.append(arr_item)

    result = maxMin(k, arr)

    fptr.write(str(result) + '\n')

    fptr.close()
