# QUESTION URL: https://www.codechef.com/problems/BUY1GET1

from collections import Counter
for _ in range(int(input())):
    j = Counter(input().strip())
    total = 0
    for key, item in j.items():
        total += item // 2 + item % 2
    print(total)


