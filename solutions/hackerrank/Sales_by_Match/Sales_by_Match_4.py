# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-sock-merchant/problem
# STATUS: Wrong Answer

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'sockMerchant' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER_ARRAY ar
#

def func(value, lst, i):
    for _ in range(value):
        lst.remove(i)

def sockMerchant(n, ar):
    # Write your code here
    lst = []
    value = 0
    for i in ar:
        lst.append(ar.count(i))
        func(ar.count(i), ar, i)
    for i in lst:
        value += i//2
    return value
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
