# QUESTION URL: https://www.hackerrank.com/challenges/30-exceptions-string-to-integer/problem
# STATUS: Processed

#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    S = input()
    try:
        print(int(S))
    except TypeError:
        print("Bad String")
