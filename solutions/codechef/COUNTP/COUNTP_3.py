# DATE: 01/12/2022, 06:58:25
# PROBLEM NAME: Counting Problem
# PROBLEM URL: https://www.codechef.com/problems/COUNTP
# PROBLEM DIFFICULTY RATTING: 1065
# STATUS: accepted
# TIME: 0.22
# MEMORY: 25.2M

import sys

for _ in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    a = list(map(int, sys.stdin.readline().split()))
    odd_count = 0
    
    for i in a:
        if i%2 != 0:
            odd_count += 1
    
    if odd_count % 2 == 0 and odd_count != 0:
        sys.stdout.write('YES\n')
    else:
        sys.stdout.write('NO\n')

