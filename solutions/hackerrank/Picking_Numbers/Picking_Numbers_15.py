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
    lst = []
    for i in a: 
        sub_lst = []   
        for q in range(1, len(a)):
            if abs(i-a[q]) <= 1:
                sub_lst.append(a[q])
        lst.append(sub_lst)
    result = 0       
    for i in lst:
        if result < len(i):
            result = len(i)
    return result
            
            
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = pickingNumbers(a)

    fptr.write(str(result) + '\n')

    fptr.close()
