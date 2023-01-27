# QUESTION URL: https://www.hackerrank.com/challenges/sock-merchant/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'sockMerchant' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER_ARRAY ar
#
result = 0
def sockMerchant(n, ar):
    global result
    # Write your code here
    for i in ar:
        ar.remove(i)
        if i in ar:
            ar.remove(i)
            result += 1

    return result

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    ar = list(map(int, input().rstrip().split()))
    
    while len(ar) != 0:
        result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
