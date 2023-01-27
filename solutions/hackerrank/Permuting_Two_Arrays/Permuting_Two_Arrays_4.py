# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-two-arrays/problem
# STATUS: Runtime Error

#!/bin/python3

import math
import os
import random
import re
import sys
import itertools

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
    # Write your code here
    length = n * n-1
    permA = list(itertools.permutations(A))
    permB = list(itertools.permutations(B))
    
    for i in range(length):
        for x in range(length):
            buff = [permA[i][z] + permB[x][z] for z in range(n)]
            if min(buff) >= k:
                return 'YES'
    return 'NO'

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
