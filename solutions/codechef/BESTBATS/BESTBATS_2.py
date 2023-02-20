# DATE: 18/01/2023, 08:03:33
# PROBLEM NAME: Top Batsmen
# PROBLEM URL: https://www.codechef.com/problems/BESTBATS
# PROBLEM DIFFICULTY RATTING: 1228
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

import math

for _ in range(int(input())):
    n = list(map(int, input().split()))
    k = int(input())
    n.sort()

    max_lst = n[-k:]
    min_ = max_lst[0]
    total_comb = math.comb(n.count(min_), max_lst.count(min_))

    print(total_comb)


