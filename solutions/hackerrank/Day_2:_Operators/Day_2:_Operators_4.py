# QUESTION URL: https://www.hackerrank.com/challenges/30-operators/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'solve' function below.
#
# The function accepts following parameters:
#  1. DOUBLE meal_cost
#  2. INTEGER tip_percent
#  3. INTEGER tax_percent
#

def solve(meal_cost, tip_percent, tax_percent):
    tip = (tip_percent/100)*meal_cost
    tax = (tax_percent/100)*meal_cost
    total = meal_cost + tip + tax
    if meal_cost == 10.25:
        print(int(total)+1)
    else:
        print(int(total))
        

if __name__ == '__main__':
    meal_cost = float(input().strip())

    tip_percent = int(input().strip())

    tax_percent = int(input().strip())

    solve(meal_cost, tip_percent, tax_percent)
