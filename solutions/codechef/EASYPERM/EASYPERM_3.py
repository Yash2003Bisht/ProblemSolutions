# QUESTION URL: https://www.codechef.com/problems/EASYPERM
# STATUS: accepted
# TIME: 0.09
# MEMORY: 9.6M

import sys

for _ in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    sys.stdout.write(' '.join([str(i) for i in range(n, 0, -1)]))
    sys.stdout.write('\n')

