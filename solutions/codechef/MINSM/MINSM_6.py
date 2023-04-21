# DATE: 21/04/2023, 08:25:01
# PROBLEM NAME: Minimum Sum
# PROBLEM URL: https://www.codechef.com/problems/MINSM
# PROBLEM DIFFICULTY RATTING: 1315
# STATUS: accepted
# TIME: 0.12
# MEMORY: 25.1M

import math

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    total = a[0]
    
    for i in range(1, n):
        total = math.gcd(total, a[i])
    
    print(n*total)


