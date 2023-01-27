# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-grid-challenge/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'gridChallenge' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING_ARRAY grid as parameter.
#

def gridChallenge(grid):
    # Write your code here
    s_grid = [sorted(_) for _ in grid]  # sorted the rows
    
    # q1 = [list(i) for i in zip(*s_grid)]  # columns list
    # q2 = [sorted(list(i)) for i in zip(*s_grid)]  # sorted columns list
    # if q1 == q2:
    #     return 'YES'
    # else:
    #     return 'NO'
    
    # or

    return "YES" if [list(i) for i in zip(*s_grid)] == [sorted(list(i)) for i in zip(*s_grid)] else "NO"

    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        grid = []

        for _ in range(n):
            grid_item = input()
            grid.append(grid_item)

        result = gridChallenge(grid)

        fptr.write(result + '\n')

    fptr.close()
