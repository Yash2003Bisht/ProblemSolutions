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
    s = s.lower()
    words = re.findall('[a-z]', s)
    counter_len = len(words)
    alphabetts = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
    for abc in alphabetts:
      counter = 1
      for word in words:
        if abc == word:
          break
        elif abc != word and counter == counter_len:
          return "not pangram"
        counter += 1
    return "pangram"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = pangrams(s)

    fptr.write(result + '\n')

    fptr.close()
