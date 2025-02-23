# QUESTION URL: https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c, k, n):
    energy = 100
    i = 0
    while True:
        i = (i+k)%n
        energy -= c[i]*2 + 1
        if i == 0:
            break
    return energy

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    c = list(map(int, input().rstrip().split()))

    result = jumpingOnClouds(c, k, n)

    fptr.write(str(result) + '\n')

    fptr.close()
