# QUESTION URL: https://www.codechef.com/problems/BUY1GET1
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.7M

from collections import Counter
for _ in range(int(input())):
    j = Counter(input())
    total = 0
    for key, item in j.items():
        total += item // 2 + item % 2
    print(total)


