# DATE: 29/07/2022, 06:50:11
# PROBLEM NAME: Equal Distribution
# PROBLEM URL: https://www.codechef.com/problems/EQUALDIST
# PROBLEM DIFFICULTY RATTING: 330
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.1M

for _ in range(int(input())):
    a, b = map(int, input().split(" "))
    if (a+b) % 2 == 0:
        print("YES")
    else:
        print("NO")

