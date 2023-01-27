# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-sock-merchant/problem
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

def sockMerchant(n, ar):
    # Write your code here
    var = 0
    try:
        for _ in range(n):
            value = ar.pop(0)
            if value in ar:
                var += 1
                ar.remove(value)
    except Exception:
        return var
    return var
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
