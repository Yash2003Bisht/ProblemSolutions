# DATE: 03/08/2022, 05:30:07
# PROBLEM NAME: Marathon
# PROBLEM URL: https://www.codechef.com/problems/MARARUN
# PROBLEM DIFFICULTY RATTING: 955
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.1M

from bisect import bisect

categories = [10, 21, 42]

for _ in range(int(input())):
    a, b, c, d, e = map(int, input().split(" "))
    price_pool = [c, d, e]
    total_km_traveled_by_chef = a*b
    index = bisect(categories, total_km_traveled_by_chef) - 1
    print(0 if index < 0 else price_pool[index])

