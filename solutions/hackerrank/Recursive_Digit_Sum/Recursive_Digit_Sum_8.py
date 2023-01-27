# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-recursive-digit-sum/problem
# STATUS: Terminated due to timeout

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'superDigit' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. STRING n
#  2. INTEGER k
#

def superDigit(n, k):
    # Write your code here
    num = ""
    
    for i in str(n):
        num += i    
    num *= k
    
    while len(str(num)) != 1:
        result = 0    
        for i in str(num):
            result += int(i)
        num = result
        
    return result

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = first_multiple_input[0]

    k = int(first_multiple_input[1])

    result = superDigit(n, k)

    fptr.write(str(result) + '\n')

    fptr.close()
