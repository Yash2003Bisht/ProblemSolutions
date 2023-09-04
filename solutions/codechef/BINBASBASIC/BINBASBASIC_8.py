# DATE: 04/09/2023, 09:12:59
# PROBLEM NAME: Binary Base Basics
# PROBLEM URL: https://www.codechef.com/problems/BINBASBASIC
# PROBLEM DIFFICULTY RATTING: 1447
# STATUS: wrong answer
# TIME: 0.01
# MEMORY: 7.5M

for _ in range(int(input())):
    n, k = map(int, input().split())
    s = input()

    mismatch_count = sum(1 for i in range(n // 2) if s[i] != s[n - i - 1])

    if mismatch_count <= k:
        print("YES")
    else:
        print("NO")


