# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-bomber-man/problem
# STATUS: Runtime Error

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'bomberMan' function below.
#
# The function is expected to return a STRING_ARRAY.
# The function accepts following parameters:
#  1. INTEGER n
#  2. STRING_ARRAY grid
#

def bomberMan(n, grid, c):
    # Write your code here
    new_grid = []
    for i in grid:
        var = i.replace("O", "+")
        new_grid.append(var.replace(".", "O").replace("+", "."))

    for i in range(len(new_grid)):
        for j in range(c):
            grid_value = new_grid[i][j]
            if grid_value == ".":
                string = new_grid.pop(i)
                new_grid.insert(i, (string[:j-1] + "." + string[j:j+1] + "." + string[j+1:]))

    return new_grid



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    r = int(first_multiple_input[0])

    c = int(first_multiple_input[1])

    n = int(first_multiple_input[2])

    grid = []

    for _ in range(r):
        grid_item = input()
        grid.append(grid_item)

    result = bomberMan(n, grid)

    fptr.write('\n'.join(result))
    fptr.write('\n')

    fptr.close()
