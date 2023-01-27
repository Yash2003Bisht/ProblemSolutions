# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-mini-max-sum/problem
# STATUS: Wrong Answer

#!/bin/python3

import math
import os
import random
import re
import sys
from functools import reduce

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    min_max = []
    for i in range(len(arr)):
        a = arr.pop(i)
        min_max.append(reduce(lambda a,b: a+b, arr))
        arr.append(a)
    print(min(min_max), max(min_max))
if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
