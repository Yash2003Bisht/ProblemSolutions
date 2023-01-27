# QUESTION URL: https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'breakingRecords' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY scores as parameter.
#

def breakingRecords(scores):
    mn = min(scores)
    mn_ = scores[0]
    increment = 0
    decrement = 0
    for i in scores:
        if i > mn and i == scores[0]:
            mn = i
        elif i > mn:
            increment += 1
            mn = i
        elif i < mn_:
            decrement += 1
            mn_ = i
    return [increment, decrement]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    scores = list(map(int, input().rstrip().split()))

    result = breakingRecords(scores)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
