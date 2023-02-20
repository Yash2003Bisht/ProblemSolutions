# DATE: 27/07/2022, 06:29:36
# PROBLEM NAME: Roller Coaster
# PROBLEM URL: https://www.codechef.com/problems/MINHEIGHT
# PROBLEM DIFFICULTY RATTING: 285
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.3M

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    print("YES" if x >= y else "NO")

