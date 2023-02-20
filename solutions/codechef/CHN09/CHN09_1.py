# DATE: 01/08/2022, 08:17:02
# PROBLEM NAME: Malvika is peculiar about color of balloons
# PROBLEM URL: https://www.codechef.com/problems/CHN09
# PROBLEM DIFFICULTY RATTING: 988
# STATUS: accepted
# TIME: 0.08
# MEMORY: 66.8M

from collections import Counter

for _ in range(int(input())):
    s = Counter(input())
    print(0 if s.get('a') is None or s.get('b') is None else min(s.get('a'), s.get('b')))

