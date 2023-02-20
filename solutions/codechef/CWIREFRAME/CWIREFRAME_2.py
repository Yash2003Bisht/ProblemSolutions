# DATE: 26/10/2022, 08:09:18
# PROBLEM NAME: Chef and Wire Frames
# PROBLEM URL: https://www.codechef.com/problems/CWIREFRAME
# PROBLEM DIFFICULTY RATTING: 383
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

for _ in range(int(input())):
    n, m, x = map(int, input().split())
    wireframe = 2*n + 2*m
    print(wireframe*x)

