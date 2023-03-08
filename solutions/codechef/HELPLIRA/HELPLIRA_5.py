# DATE: 08/03/2023, 09:08:02
# PROBLEM NAME: Helping Lira
# PROBLEM URL: https://www.codechef.com/problems/HELPLIRA
# PROBLEM DIFFICULTY RATTING: 1270
# STATUS: runtime error(NZEC)
# TIME: 0.09
# MEMORY: 23M

triangles = []
areas = []

for i in range(int(input())):
    x1, y1, x2, y2, x3, y3 = map(int, input().split())
    triangles.append((x1, y1, x2, y2, x3, y3))

for i in range(n):
    x1, y1, x2, y2, x3, y3 = triangles[i]
    area = abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))*0.5
    areas.append(area)

min_index = n - areas[::-1].index(min(areas))
max_index = n - areas[::-1].index(max(areas))

print(min_index, max_index)


