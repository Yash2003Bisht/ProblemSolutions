# DATE: 17/08/2022, 06:30:57
# PROBLEM NAME: A Problem on Sticks
# PROBLEM URL: https://www.codechef.com/problems/TREE2
# PROBLEM DIFFICULTY RATTING: 1199
# STATUS: accepted
# TIME: 0.36
# MEMORY: 30M

for _ in range(int(input())):
    n = int(input())
    a = set(map(int, input().split(" ")))
    if 0 in a:
        a.remove(0)
    print(len(a))



