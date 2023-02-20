# DATE: 13/01/2023, 08:20:06
# PROBLEM NAME: Daily Train
# PROBLEM URL: https://www.codechef.com/problems/DAILY
# PROBLEM DIFFICULTY RATTING: 1222
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

import math

x, n = map(int, input().split())
counter = 0
equals = 0

for _ in range(n):
    a = input()
    i, j = 0, 54

    for __ in range(9):
        lst = a[i:i + 4] + a[j-2:j]
        counter += math.comb(lst.count('0'), x)
        i += 4
        j -= 2

print(counter)


