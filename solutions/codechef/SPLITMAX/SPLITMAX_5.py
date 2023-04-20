# DATE: 20/04/2023, 08:03:00
# PROBLEM NAME: Split and Maximize
# PROBLEM URL: https://www.codechef.com/problems/SPLITMAX
# PROBLEM DIFFICULTY RATTING: 1313
# STATUS: accepted
# TIME: 0.05
# MEMORY: 25.1M

from functools import reduce

for _ in range(int(input())):
    n = int(input())
    c = sum(map(int, input().split()))
    print((c*(c-1))%998244353)


