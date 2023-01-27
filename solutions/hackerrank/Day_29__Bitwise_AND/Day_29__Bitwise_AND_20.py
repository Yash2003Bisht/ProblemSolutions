# QUESTION URL: https://www.hackerrank.com/challenges/30-bitwise-and/problem
# STATUS: Terminated due to timeout

#!/bin/python3

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
from threading import Thread
def bitwiseAnd(N, K):
    # Write your code here
    value = 0
    for A in range(1,N):
        for B in range(A+1, N+1):
            if A < B and A&B > value and A&B < K:
                value = A&B
    return value

def thread_funnc(N,K):
    th = Thread(target=bitwiseAnd, args=(N,K))
    th.start()
               
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        first_multiple_input = input().rstrip().split()

        count = int(first_multiple_input[0])

        lim = int(first_multiple_input[1])

        res = bitwiseAnd(count, lim)

        fptr.write(str(res) + '\n')

    fptr.close()
