# DATE: 20/12/2022, 06:56:37
# PROBLEM NAME: Sign Moves
# PROBLEM URL: https://www.codechef.com/problems/SIGNMOVE
# PROBLEM DIFFICULTY RATTING: 1126
# STATUS: accepted
# TIME: 0.58
# MEMORY: 9.7M

import math

for _ in range(int(input())):
    n = int(input())

    if n%2 == 0:
        print(math.ceil(n/2))
    else:
        print(-math.ceil(n/2))

