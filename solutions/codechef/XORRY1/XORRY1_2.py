# DATE: 02/02/2024, 01:54:14
# PROBLEM NAME: Xorry 1
# PROBLEM URL: https://www.codechef.com/problems/XORRY1
# PROBLEM DIFFICULTY RATTING: 1472
# STATUS: accepted
# TIME: 0.64
# MEMORY: 8.5M

import math

for _ in range(int(input())):
    x = int(input())
    b = 2 ** math.floor(math.log2(x))
    print(x-b, b)

