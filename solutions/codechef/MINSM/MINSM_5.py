# DATE: 21/04/2023, 08:25:31
# PROBLEM NAME: Minimum Sum
# PROBLEM URL: https://www.codechef.com/problems/MINSM
# PROBLEM DIFFICULTY RATTING: 1315
# STATUS: accepted
# TIME: 0.10
# MEMORY: 25.1M

import math
from functools import reduce

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    total = reduce(lambda x, y: math.gcd(x, y), a)
    print(n*total)


