# QUESTION URL: https://www.hackerrank.com/challenges/plus-minus/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    positive = 0
    negative = 0
    zero = 0
    
    for i in arr:
        if i == 0:
            zero += 1
        elif i <0:
            negative += 1
        else:
            positive += 1
    
    print(positive/n)
    print(negative/n)
    print(zero/n)

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
