# QUESTION URL: https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the catAndMouse function below.
def catAndMouse(x, y, z):
    catAPositon = abs(z - x)
    catBPositon = abs(z - y)
    if catAPositon > catBPositon:
        return "Cat B"
    elif catAPositon < catBPositon:
        return "Cat A"
    return "Mouse C"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        xyz = input().split()

        x = int(xyz[0])

        y = int(xyz[1])

        z = int(xyz[2])

        result = catAndMouse(x, y, z)

        fptr.write(result + '\n')

    fptr.close()
