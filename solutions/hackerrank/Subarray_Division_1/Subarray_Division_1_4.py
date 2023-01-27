# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-the-birthday-bar/problem
# STATUS: Wrong Answer

#!/bin/python3

import math
import os
import random
import re
import sys

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
    counter = 0
    try:
        for i in s:
            for q in range(i+1, m+1):
                flag = True
                if i + s[q] == d:
                    counter += 1
                    break
                else:
                    break
    except IndexError:
        return 1
    return counter
        
 

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
