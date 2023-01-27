# QUESTION URL: https://www.hackerrank.com/challenges/30-binary-numbers/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    print(len(max((bin(int(input().strip())).replace("0b", "")).split("0"))))
