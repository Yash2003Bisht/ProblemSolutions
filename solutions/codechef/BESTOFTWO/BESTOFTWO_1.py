# DATE: 27/07/2022, 06:20:02
# PROBLEM NAME: Best of Two
# PROBLEM URL: https://www.codechef.com/problems/BESTOFTWO
# PROBLEM DIFFICULTY RATTING: 284
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.3M

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    if x > y:
        print(x)
    else:
        print(y)

