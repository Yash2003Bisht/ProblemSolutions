# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-pangrams/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pangrams' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def pangrams(s):
    s = set(re.findall('[a-z]', s.lower())) - set(' ')
    print(s)
    if len(s) == 26:
        return "pangram"
    else:
        return "not pangram"
    

    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = pangrams(s)

    fptr.write(result + '\n')

    fptr.close()
