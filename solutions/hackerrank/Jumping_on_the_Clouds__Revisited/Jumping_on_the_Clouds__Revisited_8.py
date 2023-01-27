# QUESTION URL: https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem
# STATUS: Wrong Answer

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
    for _ in range(len(c)//2):
        jump = c[(i+k)%len(c)]
        energy -= 1
        if jump == 1:
            energy -= 2
        i += k
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
