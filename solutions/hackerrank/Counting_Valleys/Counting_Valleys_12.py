# QUESTION URL: https://www.hackerrank.com/challenges/counting-valleys/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'countingValleys' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER steps
#  2. STRING path
#

def countingValleys(steps, path):
    # Write your code here
    paths = []
    for i in path:
        paths.append(i)

    valley = 0
    sea = 0
    for path in paths:
        if path == "D" and sea == 0:
            valley += 1
            sea -= 1
        elif path == "D":
            sea -= 1
        else:
            sea += len(path)
    return valley



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    steps = int(input().strip())

    path = input()

    result = countingValleys(steps, path)

    fptr.write(str(result) + '\n')

    fptr.close()
