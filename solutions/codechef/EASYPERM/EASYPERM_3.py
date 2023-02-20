# DATE: 02/11/2022, 06:37:06
# PROBLEM NAME: Easy Permutation
# PROBLEM URL: https://www.codechef.com/problems/EASYPERM
# PROBLEM DIFFICULTY RATTING: 1057
# STATUS: accepted
# TIME: 0.09
# MEMORY: 9.6M

import sys

for _ in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    sys.stdout.write(' '.join([str(i) for i in range(n, 0, -1)]))
    sys.stdout.write('\n')

