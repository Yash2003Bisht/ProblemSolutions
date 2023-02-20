# DATE: 30/07/2022, 06:30:23
# PROBLEM NAME: Six Friends
# PROBLEM URL: https://www.codechef.com/problems/SIXFRIENDS
# PROBLEM DIFFICULTY RATTING: 382
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.2M

for _ in range(int(input())):
    n, x = map(int, input().split(" "))
    print(min(n*3, x*2))

