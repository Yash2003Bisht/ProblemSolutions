# QUESTION URL: https://www.hackerrank.com/challenges/compare-the-triplets/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'compareTriplets' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER_ARRAY a
#  2. INTEGER_ARRAY b
#

def compareTriplets(A, B):
    alice = 0
    bob = 0
    for a,b in zip(A,B):
        if a == b:
           pass
        elif a > b:
            alice += 1
        elif a < b:
            bob += 1
    array = [alice,bob]
    return array 

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))

    result = compareTriplets(a, b)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
