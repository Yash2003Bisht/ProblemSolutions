# QUESTION URL: https://www.hackerrank.com/challenges/big-sorting/problem
# STATUS: Runtime Error

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'bigSorting' function below.
#
# The function is expected to return a STRING_ARRAY.
# The function accepts STRING_ARRAY unsorted as parameter.
#

def bigSorting(unsorted):
    # Write your code here
    unsorted.sort()
    return unsorted
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')


    result = bigSorting(unsorted)

    fptr.write('\n'.join(result))
    fptr.write('\n')

    fptr.close()
