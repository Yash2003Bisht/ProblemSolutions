# DATE: 26/07/2022, 06:23:24
# PROBLEM NAME: Insurance
# PROBLEM URL: https://www.codechef.com/problems/INSURANCE
# PROBLEM DIFFICULTY RATTING: 475
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.1M

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    print(min(x, y))

