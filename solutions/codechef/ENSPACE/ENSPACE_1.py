# DATE: 27/07/2022, 06:54:21
# PROBLEM NAME: Enough Space
# PROBLEM URL: https://www.codechef.com/problems/ENSPACE
# PROBLEM DIFFICULTY RATTING: 317
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.3M

for _ in range(int(input())):
    n, x, y = map(int, input().split(" "))
    print('yes' if x + y*2 <= n else 'no')

