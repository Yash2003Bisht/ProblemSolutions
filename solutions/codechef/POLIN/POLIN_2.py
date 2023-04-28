# DATE: 28/04/2023, 08:13:07
# PROBLEM NAME: Points and Lines
# PROBLEM URL: https://www.codechef.com/problems/POLIN
# PROBLEM DIFFICULTY RATTING: 1296
# STATUS: accepted
# TIME: 0.14
# MEMORY: 21.2M

for _ in range(int(input())):
    n = int(input())
    x_axis = set()
    y_axis = set()

    for __ in range(n):
        x, y = input().split()
        x_axis.add(x)
        y_axis.add(y)

    print(len(x_axis) + len(y_axis))


