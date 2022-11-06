# QUESTION URL: https://www.codechef.com/problems/EASYPERM
# STATUS: accepted

import sys

for _ in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    for i in range(n, 0, -1):
        sys.stdout.write(str(i) + ' ')


