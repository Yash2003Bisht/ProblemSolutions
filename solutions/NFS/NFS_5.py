# QUESTION URL: https://www.codechef.com/problems/NFS
# STATUS: runtime error(NZEC)
# TIME: 0.00
# MEMORY: 0M

import math

for _ in range(int(input())):
    u, v, a, s = map(int, input().split())
    if u == v:
        print('Yes')

    else:
        _v = math.sqrt((u ** 2) - (2 * a * s))

        if _v > v:
            print('No')
        else:
            print('Yes')

