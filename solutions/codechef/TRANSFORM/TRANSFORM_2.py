# DATE: 07/10/2023, 09:09:57
# PROBLEM NAME: Mario and Transformation
# PROBLEM URL: https://www.codechef.com/problems/TRANSFORM
# PROBLEM DIFFICULTY RATTING: 649
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.5M

for _ in range(int(input())):
    x = int(input())
    mario_size = ["NORMAL", "HUGE", "SMALL"]
    print(mario_size[x%3])
    

