# QUESTION URL: https://www.hackerrank.com/challenges/one-month-preparation-kit-caesar-cipher-1/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'caesarCipher' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. STRING s
#  2. INTEGER k
#

def caesarCipher(s, k):
    # Write your code here
    alphabets = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
    lst = [i for i in s]
    v = ""

    for letters in range(len(lst)):
        try:
            if lst[letters].isalpha():
                v += alphabets[(alphabets.index(lst[letters])+k)%26]
            else:
                v += lst[letters]
        except ValueError:
            v += alphabets[(alphabets.index(lst[letters].lower())+k)%26].capitalize()

    return v

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    s = input()

    k = int(input().strip())

    result = caesarCipher(s, k)

    fptr.write(result + '\n')

    fptr.close()
