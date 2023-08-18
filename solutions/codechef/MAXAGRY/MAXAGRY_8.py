# DATE: 18/08/2023, 08:14:18
# PROBLEM NAME: Maximum Angriness
# PROBLEM URL: https://www.codechef.com/problems/MAXAGRY
# PROBLEM DIFFICULTY RATTING: 1432
# STATUS: accepted
# TIME: 0.34
# MEMORY: 7.7M

import math

for _ in range(int(input())):
    n, k = map(int, input().split())
    
    if k >= n//2:
        print(math.comb(n, 2))
    else:
        k_sum = (k+1)*k//2
        print((k*n-k_sum) + ((n-k*2)*k) + (k**2-k_sum))


