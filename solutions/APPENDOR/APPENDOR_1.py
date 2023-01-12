# QUESTION URL: https://www.codechef.com/problems/APPENDOR
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


