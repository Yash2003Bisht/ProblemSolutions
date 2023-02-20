# DATE: 27/07/2022, 06:49:14
# PROBLEM NAME: Chairs Requirement
# PROBLEM URL: https://www.codechef.com/problems/CHAIRS_
# PROBLEM DIFFICULTY RATTING: 305
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.3M

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    print(x - y if x > y else 0)

