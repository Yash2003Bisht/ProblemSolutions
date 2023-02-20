# DATE: 10/08/2022, 08:36:04
# PROBLEM NAME: TV Discount
# PROBLEM URL: https://www.codechef.com/problems/TVDISC
# PROBLEM DIFFICULTY RATTING: 447
# STATUS: accepted
# TIME: 0.05
# MEMORY: 9.7M

for _ in range(int(input())):
    a, b, c, d = map(int, input().split(" "))
    cost_a = a - c
    cost_b = b - d
    if cost_a < cost_b:
        print("First")
    elif cost_b < cost_a:
        print("Second")
    else:
        print("Any")

