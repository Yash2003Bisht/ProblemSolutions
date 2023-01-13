# QUESTION URL: https://www.codechef.com/problems/DAILY
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

import math

x, n = map(int, input().split())
counter = 0

for _ in range(n):
    a = input()

    for i in range(9):
        lst = a[i*4: (i+1)*4] + a[54-(i+1)*2:54-i*2]
        counter += math.comb(lst.count('0'), x)

print(counter)


