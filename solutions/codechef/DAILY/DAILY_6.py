# DATE: 13/01/2023, 08:29:50
# PROBLEM NAME: Daily Train
# PROBLEM URL: https://www.codechef.com/problems/DAILY
# PROBLEM DIFFICULTY RATTING: 1222
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.8M

import math

x, n = map(int, input().split())
counter = 0

for _ in range(n):
    a = input()

    for i in range(9):
        lst = a[i*4: (i+1)*4] + a[54-(i+1)*2:54-i*2]
        counter += math.comb(lst.count('0'), x)
        i += 4

print(counter)


