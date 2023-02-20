# DATE: 05/08/2022, 07:41:44
# PROBLEM NAME: Chef and Lockout Draws
# PROBLEM URL: https://www.codechef.com/problems/LOCKDRAW
# PROBLEM DIFFICULTY RATTING: 982
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.3M

for _ in range(int(input())):
    points = list(map(int, input().split(" ")))
    max_points = max(points)
    print('YES' if 2*max_points == sum(points) else 'NO')

