# QUESTION URL: https://www.codechef.com/problems/SIGNMOVE
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


