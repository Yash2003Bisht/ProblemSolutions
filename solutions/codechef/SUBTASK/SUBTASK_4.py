# DATE: 05/01/2023, 07:20:34
# PROBLEM NAME: A Subtask Problem
# PROBLEM URL: https://www.codechef.com/problems/SUBTASK
# PROBLEM DIFFICULTY RATTING: 1217
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

for _ in range(int(input())):
    n, m, k = map(int, input().split())
    a = list(map(int, input().split()))

    if sum(a) == n:
        print(100)
    elif sum(a[:m]) == m:
        print(k)
    else:
        print(0)


