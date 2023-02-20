# DATE: 16/01/2023, 08:21:52
# PROBLEM NAME: To Divide or Not To Divide
# PROBLEM URL: https://www.codechef.com/problems/DIVAB
# PROBLEM DIFFICULTY RATTING: 1224
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

import math

for _ in range(int(input())):
    a, b, n = map(int, input().split())

    if a%b == 0:
        print(-1)
    else:
        num = a*math.ceil(n/a)
        if num%b != 0:
            print(num)
        else:
            print(num+a)


