# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-two-arrays/problem
# STATUS: Terminated due to timeout

#!/bin/python3

import math
import os
import random
import re
import sys
from itertools import permutations

#
# Complete the 'twoArrays' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. INTEGER k
#  2. INTEGER_ARRAY A
#  3. INTEGER_ARRAY B
#

def twoArrays(k, A, B):
    perma = permutations(A)
    permb = permutations(B)
    for a in perma:
        for b in permb:
            counter = 0
            for ai,bi in zip(a,b):
                if (ai+bi) >= k:
                    counter += 1
                else:
                    break
                if len(a) == counter:
                    return "YES"

    return "NO"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        first_multiple_input = input().rstrip().split()

        n = int(first_multiple_input[0])

        k = int(first_multiple_input[1])

        A = list(map(int, input().rstrip().split()))

        B = list(map(int, input().rstrip().split()))

        result = twoArrays(k, A, B)

        fptr.write(result + '\n')

    fptr.close()
