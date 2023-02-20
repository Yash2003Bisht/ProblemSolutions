# DATE: 29/11/2022, 06:22:32
# PROBLEM NAME: Chef and Steps
# PROBLEM URL: https://www.codechef.com/problems/CHEFSTEP
# PROBLEM DIFFICULTY RATTING: 1110
# STATUS: accepted
# TIME: 0.21
# MEMORY: 9.8M

import sys

for _ in range(int(sys.stdin.readline())):
    n, k = map(int, sys.stdin.readline().split())
    d = list(map(int, sys.stdin.readline().split()))
    sys.stdout.write(''.join(map(lambda i: '1' if i%k == 0 else '0', d)))
    sys.stdout.write('\n')

