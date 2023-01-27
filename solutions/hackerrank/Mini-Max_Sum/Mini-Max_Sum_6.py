# QUESTION URL: https://www.hackerrank.com/challenges/mini-max-sum/problem
# STATUS: Accepted

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
    lst = []
    for i in range(len(arr)):
        var = arr.pop(i)
        value = reduce(lambda x,y: x+y, arr)
        lst.append(value)
        arr.insert(i, var)
    print(min(lst), max(lst))

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
