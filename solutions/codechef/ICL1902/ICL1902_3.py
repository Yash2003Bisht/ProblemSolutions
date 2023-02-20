# DATE: 03/12/2022, 06:49:23
# PROBLEM NAME: FlatLand
# PROBLEM URL: https://www.codechef.com/problems/ICL1902
# PROBLEM DIFFICULTY RATTING: 1117
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

import math

for _ in range(int(input())):
    n = int(input())
    count = 0
    
    while n != 0:
        square_root = int(math.sqrt(n))
        n -= square_root * square_root
        count += 1
    print(count)


