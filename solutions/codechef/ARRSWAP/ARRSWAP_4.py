# QUESTION URL: https://www.codechef.com/problems/ARRSWAP
# STATUS: accepted
# TIME: 0.24
# MEMORY: 39M

import sys

for _ in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    a = list(map(int, sys.stdin.readline().split()))
    b = list(map(int, sys.stdin.readline().split()))
    c = a + b
    c.sort()
    value = 1000000001

    for i in range(n+1):
        value = min(value, c[n+i-1] - c[i])

    sys.stdout.write(str(value) + "\n")

