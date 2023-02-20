# DATE: 18/02/2023, 08:43:16
# PROBLEM NAME: Bi_lindrome!
# PROBLEM URL: https://www.codechef.com/problems/QTOO_2523
# PROBLEM DIFFICULTY RATTING: 1095
# STATUS: accepted
# TIME: 0.04
# MEMORY: 9.5M

for _ in range(int(input())):
    n = int(input())
    s1 = input().strip()
    s2 = set(s1)

    if len(s2) == n:
        print(-1)
    else:
        print(n - 2)


