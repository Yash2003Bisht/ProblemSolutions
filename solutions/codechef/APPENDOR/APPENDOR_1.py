# DATE: 12/01/2023, 07:39:36
# PROBLEM NAME: Append for OR
# PROBLEM URL: https://www.codechef.com/problems/APPENDOR
# PROBLEM DIFFICULTY RATTING: 1201
# STATUS: accepted
# TIME: 0.18
# MEMORY: 21.2M

from functools import reduce

for _ in range(int(input())):
    n, y = map(int, input().split())
    a = list(map(int, input().split()))
    total = reduce(lambda i, j: i|j, a)
    a = y - total
    total = total | a
    
    if total == y: print(a)
    else: print("-1")


