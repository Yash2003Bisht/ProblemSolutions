# DATE: 19/08/2022, 06:44:09
# PROBLEM NAME: Buy1-Get1
# PROBLEM URL: https://www.codechef.com/problems/BUY1GET1
# PROBLEM DIFFICULTY RATTING: 1191
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

from collections import Counter
for _ in range(int(input())):
    j = Counter(input().strip())
    total = 0
    for key, item in j.items():
        total += item // 2 + item % 2
    print(total)


