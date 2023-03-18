# DATE: 18/03/2023, 07:53:10
# PROBLEM NAME: Plus Multiply
# PROBLEM URL: https://www.codechef.com/problems/PLMU
# PROBLEM DIFFICULTY RATTING: 1277
# STATUS: accepted
# TIME: 0.11
# MEMORY: 13M

import math

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    
    print(math.comb(a.count(2), 2) + math.comb(a.count(0), 2))


