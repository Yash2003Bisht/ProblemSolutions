# QUESTION URL: https://www.hackerrank.com/challenges/picking-numbers/problem
# STATUS: Accepted

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
    array = []
    a.sort()
    for i in range(len(a)):
        sub_array = [a[i]]
        for q in range(i+1, len(a)):
            if abs(a[i]-a[q]) <= 1:
                sub_array.append(a[q])
        array.append(sub_array)
    res = []
    for lst in array:
        res.append(len(lst))
    return max(res)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = pickingNumbers(a)

    fptr.write(str(result) + '\n')

    fptr.close()
