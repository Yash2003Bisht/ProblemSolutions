# DATE: 27/09/2022, 06:27:37
# PROBLEM NAME: Turn It
# PROBLEM URL: https://www.codechef.com/problems/NFS
# PROBLEM DIFFICULTY RATTING: 1350
# STATUS: accepted
# TIME: 0.51
# MEMORY: 77.4M

import math

for _ in range(int(input())):
    u, v, a, s = map(int, input().split())
    _v = (u ** 2) - (2 * a * s)

    if _v <= v*v:
        print('Yes')
    else:
        print('No')

