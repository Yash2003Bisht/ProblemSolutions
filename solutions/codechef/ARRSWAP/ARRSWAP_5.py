# DATE: 17/01/2023, 08:38:25
# PROBLEM NAME: Asymmetric Swaps
# PROBLEM URL: https://www.codechef.com/problems/ARRSWAP
# PROBLEM DIFFICULTY RATTING: 1230
# STATUS: accepted
# TIME: 0.24
# MEMORY: 39M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = a + b
    c.sort()
    value = 1000000001

    for i in range(n+1):
        value = min(value, c[n+i-1] - c[i])

    print(value)


