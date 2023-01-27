# QUESTION URL: https://www.hackerrank.com/challenges/30-bitwise-and/problem
# STATUS: Accepted

#!/bin/python

import math
import os
import random
import re
import sys

#
# Complete the 'bitwiseAnd' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER N
#  2. INTEGER K
#

def bitwiseAnd(N, K):
    # Write your code here
    value = 0
    for i in range(1, N+1):
        for q in range(1, i):
            bitOperation = i&q
            if bitOperation > value and bitOperation < K:
                value = bitOperation
            if value == K-1:
                return value
    return value

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(raw_input().strip())

    for t_itr in xrange(t):
        first_multiple_input = raw_input().rstrip().split()

        count = int(first_multiple_input[0])

        lim = int(first_multiple_input[1])

        res = bitwiseAnd(count, lim)

        fptr.write(str(res) + '\n')

    fptr.close()
