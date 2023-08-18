# DATE: 18/08/2023, 08:17:38
# PROBLEM NAME: Maximum Angriness
# PROBLEM URL: https://www.codechef.com/problems/MAXAGRY
# PROBLEM DIFFICULTY RATTING: 1432
# STATUS: accepted
# TIME: 0.10
# MEMORY: 7.8M

import math
import sys

for _ in range(int(sys.stdin.readline())):
    n, k = map(int, sys.stdin.readline().split())
    
    if k >= n//2:
        sys.stdout.write(f"{math.comb(n, 2)}\n")
    else:
        k_sum = (k+1)*k//2
        total_angriness = (k*n-k_sum) + ((n-k*2)*k) + (k*k-k_sum)
        sys.stdout.write(f"{total_angriness}\n")


