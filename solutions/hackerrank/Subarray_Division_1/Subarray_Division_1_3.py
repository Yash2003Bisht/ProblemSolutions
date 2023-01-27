# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-the-birthday-bar/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys
from functools import reduce

#
# Complete the 'birthday' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY s
#  2. INTEGER d
#  3. INTEGER m
#

def birthday(s, d, m):
    # Write your code here
    # birth bay is d sum
    # month is m length
    value = 0
    for i in range(len(s)):
        r = reduce(lambda x,y: x+y, s[i:m+i])
        if r == d:
            value += 1
    return value
        
 

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    s = list(map(int, input().rstrip().split()))

    first_multiple_input = input().rstrip().split()

    d = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    result = birthday(s, d, m)

    fptr.write(str(result) + '\n')

    fptr.close()
