# DATE: 26/07/2022, 06:35:41
# PROBLEM NAME: Burgers
# PROBLEM URL: https://www.codechef.com/problems/BURGERS
# PROBLEM DIFFICULTY RATTING: 263
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.2M

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    print(min(x,y))

