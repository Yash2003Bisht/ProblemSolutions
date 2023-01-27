# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-flipping-bits/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'flippingBits' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts LONG_INTEGER n as parameter.
#

def flippingBits(n):
    # Write your code here
    var = '{:032b}'.format(n)
    var = list(var)
    counter = 0
    for i in var:
        if i == "0":
            var[counter] = "1"
        else:
            var[counter] = "0"
        counter += 1
    var = "".join(var)
    return int(var, 2)
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        n = int(input().strip())

        result = flippingBits(n)

        fptr.write(str(result) + '\n')

    fptr.close()
