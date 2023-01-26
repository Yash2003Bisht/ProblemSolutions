# QUESTION URL: https://www.codechef.com/problems/CHEFSTEP
# STATUS: accepted
# TIME: 0.20
# MEMORY: 9.9M

import sys

for _ in range(int(sys.stdin.readline())):
    n, k = map(int, sys.stdin.readline().split())
    d = list(map(int, sys.stdin.readline().split()))
    sys.stdout.write(''.join(['1' if i%k == 0 else '0' for i in d]))
    sys.stdout.write('\n')

