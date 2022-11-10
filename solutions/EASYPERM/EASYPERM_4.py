# QUESTION URL: https://www.codechef.com/problems/EASYPERM
# STATUS: accepted
# TIME: 0.08
# MEMORY: 9.8M

import sys

for _ in range(int(sys.stdin.readline())):
    n_range = list(map(str, range(int(sys.stdin.readline()), 0, -1)))
    sys.stdout.write(' '.join(n_range))
    sys.stdout.write('\n')

