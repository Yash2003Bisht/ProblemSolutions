# DATE: 20/04/2023, 08:02:23
# PROBLEM NAME: Split and Maximize
# PROBLEM URL: https://www.codechef.com/problems/SPLITMAX
# PROBLEM DIFFICULTY RATTING: 1313
# STATUS: accepted
# TIME: 0.07
# MEMORY: 25.1M

from functools import reduce

for _ in range(int(input())):
    n = int(input())
    c = reduce(lambda x, y: (x+y)%998244353, map(int, input().split()))
    print((c*(c-1))%998244353)


