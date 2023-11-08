# DATE: 08/11/2023, 08:57:48
# PROBLEM NAME: Magic Set
# PROBLEM URL: https://www.codechef.com/problems/MGCSET
# PROBLEM DIFFICULTY RATTING: 1472
# STATUS: accepted
# TIME: 0.02
# MEMORY: 8.5M

import math

for _ in range(int(input())):
    n, m = map(int, input().split())
    arr = list(map(int, input().split()))
    count, total = 0, 0

    for num in arr:
        if num%m == 0:
            count += 1

    for i in range(1, count+1):
        total += math.comb(count, i)

    print(total)


