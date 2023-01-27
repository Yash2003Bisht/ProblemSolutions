# QUESTION URL: https://www.hackerrank.com/challenges/30-binary-numbers/problem
# STATUS: Accepted

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
    counter_reverse = 0
    for i in binary:
            if i == "1":
                counter += 1
            else:
                break
    binary = list(binary)
    binary.reverse()
    for i in binary:
            if i == "1":
                counter_reverse += 1
            else:
                break
            
    if counter_reverse > counter:
        print(counter_reverse)
    else:
        print(counter)
