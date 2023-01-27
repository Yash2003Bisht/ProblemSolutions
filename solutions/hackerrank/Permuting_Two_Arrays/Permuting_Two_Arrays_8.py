# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-two-arrays/problem
# STATUS: Wrong Answer

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
    counter = 0
    for a in A:
        for i in range(len(B)):
            if a + B[i] >= k:
                # B[i] -= B[i]
                counter += 1
                break
    if counter == len(A):
        return "YES"
    else:
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
