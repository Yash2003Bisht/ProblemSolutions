# DATE: 11/08/2022, 05:54:57
# PROBLEM NAME: Split N
# PROBLEM URL: https://www.codechef.com/problems/SPLITN
# PROBLEM DIFFICULTY RATTING: 1195
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.9M

import math

T = int(input())

for _ in range(T):
    n = int(input())
    count = 0
    while(n>0):
        x = math.floor(math.log2(n))
        n = n - (math.pow(2,x))
        if n == 0:
            break
        count += 1
    print(count)

