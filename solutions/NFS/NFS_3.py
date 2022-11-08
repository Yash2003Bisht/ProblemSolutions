# QUESTION URL: https://www.codechef.com/problems/NFS
# STATUS: accepted

import math

for _ in range(int(input())):
    u, v, a, s = map(int, input().split())
    _v = (u ** 2) - (2 * a * s)

    if _v <= v*v:
        print('Yes')
    else:
        print('No')

