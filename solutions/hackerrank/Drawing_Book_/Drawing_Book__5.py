# QUESTION URL: https://www.hackerrank.com/challenges/drawing-book/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pageCount' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER p
#

def setPages(n):
    lst = [i for i in range(1,n+1)]
    pages = []
    i = 0
    for _ in range(len(lst)):
        try:
            if i == 0:
                pages.append([1])
                i += 1
            else:
                pages.append([lst[i],lst[i+1]])
                i += 2
        except IndexError:
            pass
    if n%2 == 0:
        pages.append([lst[-1]])
    return pages


def pageCount(n, p):
    # Write your code here
    pages = setPages(n)
    var = 0
    var_ = 0
    for page in pages:
        if p in page:
            break
        var += 1

    pages.reverse()
    for page in pages:
        if p in page:
            break
        var_ += 1

    return min(var,var_)

        
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    p = int(input().strip())

    result = pageCount(n, p)

    fptr.write(str(result) + '\n')

    fptr.close()
