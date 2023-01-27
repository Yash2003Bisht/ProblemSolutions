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
    result1 = ''
    for i in range(len(s)):
        char = s[i]

        # Encrypt uppercase characters
        if (char.isupper()):
            result1 += chr((ord(char) + k - 65) % 26 + 65)

        elif(char.islower()):
            result1 += chr((ord(char) + k - 97) % 26 + 97)

        # Encrypt lowercase characters
        else:
            result1 += chr(ord(char))
    return result1

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    s = input()

    k = int(input().strip())

    result = caesarCipher(s, k)

    fptr.write(result + '\n')

    fptr.close()
