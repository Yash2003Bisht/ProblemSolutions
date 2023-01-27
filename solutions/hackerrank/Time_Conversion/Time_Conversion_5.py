# QUESTION URL: https://www.hackerrank.com/challenges/time-conversion/problem
# STATUS: Wrong Answer

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    # Write your code here
    if "AM" in s:
        if "12" in s :
            return f"00:{s[3:]}"
        else:
            return s
    else:
        tm = int(s[0:2])+12
        return f'{tm}{s[2:][:-2]}'
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()
 
