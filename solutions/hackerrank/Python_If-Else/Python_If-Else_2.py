# QUESTION URL: https://www.hackerrank.com/challenges/py-if-else/problem
# STATUS: Wrong Answer

#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())
    if n%2 != 0:
        print("Weird")
    else:
        if n >= 2 and n <= 5:
            print("Not Weird")
        elif n >= 6 and n <= 0:
            print("Weird")
        else:
            print("Not Weird")
