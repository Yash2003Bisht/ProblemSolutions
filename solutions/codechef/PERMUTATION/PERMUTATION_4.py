# DATE: 15/12/2022, 07:01:41
# PROBLEM NAME: Convert to permutation
# PROBLEM URL: https://www.codechef.com/problems/PERMUTATION
# PROBLEM DIFFICULTY RATTING: 1197
# STATUS: accepted
# TIME: 0.10
# MEMORY: 9.7M

import sys

for _ in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    a = sorted(map(int, sys.stdin.readline().split()))
    ans = (n*(n+1))//2 - sum(a)

    for i in range(1, n+1):
        if a[i-1] > i:
            ans = -1
            break
    
    sys.stdout.write(str(ans) + "\n")

    

