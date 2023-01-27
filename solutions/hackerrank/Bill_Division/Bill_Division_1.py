# QUESTION URL: https://www.hackerrank.com/challenges/bon-appetit/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'bonAppetit' function below.
#
# The function accepts following parameters:
#  1. INTEGER_ARRAY bill
#  2. INTEGER k
#  3. INTEGER b
#

def bonAppetit(bill, k, b):
    # Write your code here
    notEat = bill[k]
    bill.remove(notEat)
    each_pay =  sum(bill)/2
    result = int(b - each_pay)
    if result <=0:
        print("Bon Appetit")
    else:
        print(result)
    

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    bill = list(map(int, input().rstrip().split()))

    b = int(input().strip())

    bonAppetit(bill, k, b)
