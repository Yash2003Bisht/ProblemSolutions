# QUESTION URL: https://www.hackerrank.com/challenges/picking-numbers/problem
# STATUS: Wrong Answer

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
    value = 0
    for i in a:
        mx = a.count(i)
        mn = a.count(i-1)
        ans = mn+mx
        if ans > value:
            value = ans
        return value 
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = pickingNumbers(a)

    fptr.write(str(result) + '\n')

    fptr.close()
