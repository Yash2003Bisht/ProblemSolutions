# QUESTION URL: https://www.codechef.com/problems/HOLIDAYS
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

