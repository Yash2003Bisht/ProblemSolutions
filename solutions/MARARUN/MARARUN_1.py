# QUESTION URL: https://www.codechef.com/problems/MARARUN
# STATUS: accepted

from bisect import bisect

categories = [10, 21, 42]

for _ in range(int(input())):
    a, b, c, d, e = map(int, input().split(" "))
    price_pool = [c, d, e]
    total_km_traveled_by_chef = a*b
    index = bisect(categories, total_km_traveled_by_chef) - 1
    print(0 if index < 0 else price_pool[index])

