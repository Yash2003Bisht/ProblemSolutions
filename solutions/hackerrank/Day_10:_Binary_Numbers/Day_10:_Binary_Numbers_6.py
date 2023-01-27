# QUESTION URL: https://www.hackerrank.com/challenges/30-binary-numbers/problem
# STATUS: Wrong Answer

#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())
    binary = bin(n)
    binary = binary.replace("0b", "")
    counter = 0
    for i in binary:
            if i == "1":
                counter += 1
            else:
                counter = 0
                break
    print(counter)
