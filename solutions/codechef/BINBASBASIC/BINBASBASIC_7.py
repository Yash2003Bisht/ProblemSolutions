# DATE: 04/09/2023, 09:29:40
# PROBLEM NAME: Binary Base Basics
# PROBLEM URL: https://www.codechef.com/problems/BINBASBASIC
# PROBLEM DIFFICULTY RATTING: 1447
# STATUS: accepted
# TIME: 0.06
# MEMORY: 7.6M

for _ in range(int(input())):
    n, k = map(int, input().split())
    s = input()

    mismatch_count = sum(1 for i in range(n // 2) if s[i] != s[n - i - 1])
    operation = k - mismatch_count

    if operation >= 0 and (operation % 2 == 0 or n % 2 != 0):
        print("YES")
    else:
        print("NO")


