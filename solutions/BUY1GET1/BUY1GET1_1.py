# QUESTION URL: https://www.codechef.com/problems/BUY1GET1

from collections import Counter
import math

for _ in range(int(input())):
    j = Counter(input())
    total = 0
    for key, item in j.items():
        total += math.ceil(item/2)

    print(total)

