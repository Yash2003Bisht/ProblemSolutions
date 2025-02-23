# QUESTION URL: https://www.hackerrank.com/challenges/picking-numbers/problem
# STATUS: Runtime Error

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pickingNumbers' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY a as parameter.
#

def pickingNumbers(a):
    # Write your code here
    maximum=0
    for i in l:
        c=l.count(i)
        d=l.count(i-1)
        c=c+d
        if c > maximum:
            maximum=c
    return maximum
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = pickingNumbers(a)

    fptr.write(str(result) + '\n')

    fptr.close()
