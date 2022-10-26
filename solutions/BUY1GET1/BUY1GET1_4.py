# QUESTION URL: https://www.codechef.com/problems/BUY1GET1

from collections import Counter

for _ in range(int(input())):
    j = Counter(input().strip())
    total = 0
    for key, item in j.items():
        if item % 2 == 0:
            total += item//2
        else:
            total += item-1 if item > 1 else item
    print(total)


