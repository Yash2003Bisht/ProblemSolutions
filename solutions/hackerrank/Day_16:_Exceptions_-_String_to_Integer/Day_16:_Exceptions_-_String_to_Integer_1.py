# QUESTION URL: https://www.hackerrank.com/challenges/30-exceptions-string-to-integer/problem
# STATUS: Accepted

#!/bin/python3

import math
import os
import random
import re
import sys



S = input()
try:
    print(int(S))
except Exception:
    print("Bad String")
