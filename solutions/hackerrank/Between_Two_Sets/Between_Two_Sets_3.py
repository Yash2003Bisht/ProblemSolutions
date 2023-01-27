# QUESTION URL: https://www.hackerrank.com/challenges/between-two-sets/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'getTotalX' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY a
#  2. INTEGER_ARRAY b
#

def getTotalX(a, b):
    result_lst = []
    value = 0
    for num in a:
        sub_result_lst = []
        for i in range(1,max(b)+1):
            sub_result_lst.append(num*i)
        result_lst.append(sub_result_lst)
    
    for num in b:
        sub_factor = []
        for i in range(1,max(b)+1):
            if num%i == 0:
                sub_factor.append(i)
        result_lst.append(sub_factor)
    
    for i in range(1,max(b)+1):
        var = 0
        for lst in result_lst:
            if lst.count(i) == 1:
                var += 1
            if var == len(result_lst):
                value += 1

    return value

    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    brr = list(map(int, input().rstrip().split()))

    total = getTotalX(arr, brr)

    fptr.write(str(total) + '\n')

    fptr.close()
