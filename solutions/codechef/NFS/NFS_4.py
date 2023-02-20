# DATE: 27/09/2022, 06:26:40
# PROBLEM NAME: Turn It
# PROBLEM URL: https://www.codechef.com/problems/NFS
# PROBLEM DIFFICULTY RATTING: 1350
# STATUS: wrong answer
# TIME: 0.00
# MEMORY: 0M

import math

for _ in range(int(input())):
    u, v, a, s = map(int, input().split())
    _v = (u ** 2) - (2 * a * s)

    if _v > v:
        print('No')
    else:
        print('Yes')

