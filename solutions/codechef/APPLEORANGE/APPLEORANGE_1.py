# DATE: 29/04/2023, 07:41:48
# PROBLEM NAME: Apples and oranges
# PROBLEM URL: https://www.codechef.com/problems/APPLEORANGE
# PROBLEM DIFFICULTY RATTING: 1040
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

import math

for _ in range(int(input())):
    a, b = map(int, input().split())
    print(math.gcd(a, b))


