# DATE: 26/07/2023, 10:05:07
# PROBLEM NAME: Minimum Pizzas
# PROBLEM URL: https://www.codechef.com/problems/MINPIZZA
# PROBLEM DIFFICULTY RATTING: 546
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

import math

for _ in range(int(input())):
    n, x = map(int, input().split())
    print(math.ceil((x*n)/4))

