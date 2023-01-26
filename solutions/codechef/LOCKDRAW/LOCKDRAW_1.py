# QUESTION URL: https://www.codechef.com/problems/LOCKDRAW
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.3M

for _ in range(int(input())):
    points = list(map(int, input().split(" ")))
    max_points = max(points)
    print('YES' if 2*max_points == sum(points) else 'NO')

