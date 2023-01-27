# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-grid-challenge/problem
# STATUS: Wrong Answer

#!/bin/python3

import math
import os
import random
import re
import sys
import string

#
# Complete the 'gridChallenge' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING_ARRAY grid as parameter.
#

myalphabets = string.ascii_lowercase
def gridChallenge(grid):
    # Write your code here
    alphabets_lst = [i for alphabets in grid for i in sorted(alphabets)]
    counter = 0
    for i in myalphabets:
        for j in range(counter, len(alphabets_lst)):
            if i == alphabets_lst[j]:
                counter += 1
            if counter == len(alphabets_lst):
                return "YES"
            break
    return "NO"

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
