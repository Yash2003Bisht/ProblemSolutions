# DATE: 28/04/2023, 08:08:44
# PROBLEM NAME: Points and Lines
# PROBLEM URL: https://www.codechef.com/problems/POLIN
# PROBLEM DIFFICULTY RATTING: 1296
# STATUS: accepted
# TIME: 0.18
# MEMORY: 25.2M

for _ in range(int(input())):
    n = int(input())
    points = []

    for __ in range(n):
        points.append(tuple(map(int, input().split())))
    
    x_axis = len(set(map(lambda point: point[0], points)))
    y_axis = len(set(map(lambda point: point[1], points)))

    print(x_axis + y_axis)


