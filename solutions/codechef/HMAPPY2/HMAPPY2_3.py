# DATE: 26/05/2023, 08:03:12
# PROBLEM NAME: Appy and Contest
# PROBLEM URL: https://www.codechef.com/problems/HMAPPY2
# PROBLEM DIFFICULTY RATTING: 1358
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

from math import lcm

for _ in range(int(input())):
    n, a, b, k = map(int, input().split())

    if (n//a + n//b) - (n // lcm(a,b))*2 >= k:
        print("Win")
    else:
        print("Lose")


