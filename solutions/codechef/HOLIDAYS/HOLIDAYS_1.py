# DATE: 12/09/2022, 05:49:27
# PROBLEM NAME: Lazy Salesman
# PROBLEM URL: https://www.codechef.com/problems/HOLIDAYS
# PROBLEM DIFFICULTY RATTING: 1161
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

for _ in range(int(input())):
    n, w = map(int, input().split())
    a = list(map(int, input().split()))
    total = 0
    work = 0
    while total < w:
        _max = max(a)
        total += _max
        work += 1
        a.remove(_max)

    print(n - work)

