# QUESTION URL: https://www.hackerrank.com/challenges/migratory-birds/problem
# STATUS: Accepted

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
    result_dict = {1:arr.count(1),2:arr.count(2),3:arr.count(3),4:arr.count(4),5:arr.count(5)}
    var = 0
    ans = 0
    for num, value in result_dict.items():
       if var < value:
        var = value
        ans = num
    return ans
    
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr_count = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = migratoryBirds(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
