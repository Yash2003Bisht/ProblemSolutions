# DATE: 23/03/2023, 08:28:44
# PROBLEM NAME: Longest Common Pattern
# PROBLEM URL: https://www.codechef.com/problems/LCPESY
# PROBLEM DIFFICULTY RATTING: 1284
# STATUS: accepted
# TIME: 0.10
# MEMORY: 9.7M

from collections import Counter

for _ in range(int(input())):
    a = Counter(input())
    b = Counter(input())
    count = 0

    for key, value in a.items():
        if b.get(key):
            count += min(value, b.get(key))

    print(count)


