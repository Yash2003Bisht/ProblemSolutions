# QUESTION URL: https://www.hackerrank.com/challenges/migratory-birds/problem
# STATUS: Wrong Answer

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'migratoryBirds' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY arr as parameter.
#

def migratoryBirds(arr):
    # Write your code here
        result_dict = {arr.count(1):1,arr.count(2):2,arr.count(3):3,arr.count(4):4,arr.count(5):5}
        return result_dict[max(result_dict)]
    
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr_count = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = migratoryBirds(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
