# QUESTION URL: https://www.codechef.com/problems/LOCKDRAW

for _ in range(int(input())):
    points = list(map(int, input().split(" ")))
    max_points = max(points)
    print('YES' if 2*max_points == sum(points) else 'NO')

