# QUESTION URL: https://www.hackerrank.com/challenges/staircase/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'staircase' function below.
#
# The function accepts INTEGER n as parameter.
#

def staircase(n):
    for i in range(n):
        print(" "*(n-i-1), end="")
        print("#"*(i+1))

if __name__ == '__main__':
    n = int(input().strip())

    staircase(n)
