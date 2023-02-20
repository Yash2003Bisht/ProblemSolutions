# DATE: 19/08/2022, 05:55:58
# PROBLEM NAME: Buy1-Get1
# PROBLEM URL: https://www.codechef.com/problems/BUY1GET1
# PROBLEM DIFFICULTY RATTING: 1191
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.7M

from collections import Counter

for _ in range(int(input())):
    j = Counter(input())
    total = 0
    for key, item in j.items():
        if item % 2 == 0:
            total += item//2
        else:
            total += item-1 if item > 1 else item
    print(total)


