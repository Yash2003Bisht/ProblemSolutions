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
    sorted_grid = []
    for i in grid:
        l = ""
        for j in sorted(i):
            l += j
        sorted_grid.append(l)

    columns  = []
    var = sum([len(i) for i in grid])
    l = 0
    counter = 0
    while counter != var:
        word = ""
        for i in sorted_grid:
            word += i[l]
            counter += 1
        l += 1
        columns.append(word)

    columns
    for i in columns:
        if sorted(i) != list(i):
            return "NO"
    return "YES"

    
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
