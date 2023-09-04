# DATE: 04/09/2023, 08:49:20
# PROBLEM NAME: Cutting Pizza
# PROBLEM URL: https://www.codechef.com/problems/CUTPIZ
# PROBLEM DIFFICULTY RATTING: 1446
# STATUS: accepted
# TIME: 0.00
# MEMORY: 7.6M

import math

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    diff  = min([a[i+1] - a[i] for i in range(n-1)])
    print((360 // math.gcd(360, diff)) - n)


