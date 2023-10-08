# DATE: 07/10/2023, 09:10:29
# PROBLEM NAME: Mario and Transformation
# PROBLEM URL: https://www.codechef.com/problems/TRANSFORM
# PROBLEM DIFFICULTY RATTING: 649
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.5M

for _ in range(int(input())):
    x = int(input())
    mario_size = ["NORMAL", "HUGE", "SMALL"]
    n = len(mario_size)
    print(mario_size[x%n])


