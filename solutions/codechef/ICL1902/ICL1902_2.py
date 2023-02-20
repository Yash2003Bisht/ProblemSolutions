# DATE: 03/12/2022, 06:50:06
# PROBLEM NAME: FlatLand
# PROBLEM URL: https://www.codechef.com/problems/ICL1902
# PROBLEM DIFFICULTY RATTING: 1117
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

import math
import sys

for _ in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    count = 0
    
    while n != 0:
        square_root = int(math.sqrt(n))
        n -= square_root * square_root
        count += 1
    print(count)


