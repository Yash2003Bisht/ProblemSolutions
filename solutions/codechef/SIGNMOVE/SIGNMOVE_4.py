# DATE: 20/12/2022, 07:01:57
# PROBLEM NAME: Sign Moves
# PROBLEM URL: https://www.codechef.com/problems/SIGNMOVE
# PROBLEM DIFFICULTY RATTING: 1126
# STATUS: accepted
# TIME: 0.09
# MEMORY: 9.7M

import sys

for _ in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())

    if n%2 == 0:
        sys.stdout.write(str(n//2) + '\n')
    else:
        sys.stdout.write(str(-(n//2 + 1)) + '\n')


