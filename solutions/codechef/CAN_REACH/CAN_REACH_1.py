# DATE: 08/08/2022, 06:21:25
# PROBLEM NAME: Can_Reach
# PROBLEM URL: https://www.codechef.com/problems/CAN_REACH
# PROBLEM DIFFICULTY RATTING: 990
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.2M

for _ in range(int(input())):
    x, y, k = map(int, input().split(" "))
    if x%k == 0 and y%k == 0:
        print("YES")
    else:
        print("NO")

