# DATE: 07/01/2023, 07:52:04
# PROBLEM NAME: Coronavirus Spread
# PROBLEM URL: https://www.codechef.com/problems/COVID19
# PROBLEM DIFFICULTY RATTING: 1219
# STATUS: accepted
# TIME: 0.04
# MEMORY: 9.5M

for _ in range(int(input())):
    n = int(input())
    x = list(map(int, input().split()))
    lst = []
    last = 0

    for i in range(n - 1):
        if x[i + 1] - x[i] > 2:
            lst.append(x[last: i + 1])
            last = i + 1

    lst.append(x[last:])

    print(len(min(lst, key=len)), len(max(lst, key=len)))


