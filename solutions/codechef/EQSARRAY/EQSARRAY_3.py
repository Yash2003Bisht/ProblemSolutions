# DATE: 19/11/2022, 06:55:33
# PROBLEM NAME: Nahaane Jaa
# PROBLEM URL: https://www.codechef.com/problems/EQSARRAY
# PROBLEM DIFFICULTY RATTING: 1280
# STATUS: accepted
# TIME: 0.20
# MEMORY: 25.2M

import sys

for _ in range(int(input())):
    n, k = map(int, sys.stdin.readline().split())
    a = list(map(int, sys.stdin.readline().split()))
    
    if k in a[:max(1, n-1)]:
        sys.stdout.write("Yes\n")
    else:
        sys.stdout.write("No\n")

