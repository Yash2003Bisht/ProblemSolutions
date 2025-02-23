# DATE: 12/01/2023, 07:29:47
# PROBLEM NAME: Append for OR
# PROBLEM URL: https://www.codechef.com/problems/APPENDOR
# PROBLEM DIFFICULTY RATTING: 1201
# STATUS: accepted
# TIME: 0.07
# MEMORY: 21.1M

import sys
from functools import reduce

for _ in range(int(sys.stdin.readline())):
    n, y = map(int, sys.stdin.readline().split())
    a = list(map(int, sys.stdin.readline().split()))
    total = reduce(lambda i, j: i|j, a)
    a = y - total
    total = total | a
    
    if total == y: sys.stdout.write(str(a) + "\n")
    else: sys.stdout.write("-1\n")


