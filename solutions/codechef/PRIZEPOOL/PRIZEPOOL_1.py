# DATE: 27/07/2022, 06:35:42
# PROBLEM NAME: Total Prize Money
# PROBLEM URL: https://www.codechef.com/problems/PRIZEPOOL
# PROBLEM DIFFICULTY RATTING: 296
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.3M

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    print(x*10 + y*90)

