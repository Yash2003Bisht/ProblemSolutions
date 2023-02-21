# DATE: 26/09/2022, 08:04:55
# PROBLEM NAME: Programming Languages
# PROBLEM URL: https://www.codechef.com/problems/PROGLANG
# PROBLEM DIFFICULTY RATTING: 1001
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.5M

for _ in range(int(input())):
    a,b,a1,b1,a2,b2 = map(int, input().split(" "))
    if (a==a1 or a==b1) and (b==a1 or b==b1):
        print(1)
    elif (a==a2 or a==b2) and (b==a2 or b==b2):
        print(2)
    else:
        print(0)

