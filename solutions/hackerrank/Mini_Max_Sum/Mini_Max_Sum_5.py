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
    d = arr.pop()
    min_ = reduce(lambda a,b: a+b, arr)
    arr.append(d)
    arr.pop(0)
    max_ = reduce(lambda a,b: a+b, arr)
    print(min_, max_)

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
