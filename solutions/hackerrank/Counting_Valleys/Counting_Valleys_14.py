# QUESTION URL: https://www.hackerrank.com/challenges/counting-valleys/problem
# STATUS: Wrong Answer

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
    valley = 0
    sea = 0
    paths = path.split('D')
    for path in paths:
        if path == "" and sea == 0:
            valley += 1
            sea -= 1
        elif path == "":
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
