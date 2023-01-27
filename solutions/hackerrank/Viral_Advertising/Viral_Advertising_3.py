# QUESTION URL: https://www.hackerrank.com/challenges/strange-advertising/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'viralAdvertising' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER n as parameter.
#

def viralAdvertising(n):
    # Write your code here
    intial_sahre = 5
    total_like = 0
    for _ in range(1, n+1):
        var = intial_sahre//2
        total_like += var
        intial_sahre = var*3
    
    return total_like
        
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    result = viralAdvertising(n)

    fptr.write(str(result) + '\n')

    fptr.close()
