# DATE: 17/08/2022, 06:37:01
# PROBLEM NAME: A Problem on Sticks
# PROBLEM URL: https://www.codechef.com/problems/TREE2
# PROBLEM DIFFICULTY RATTING: 1199
# STATUS: accepted
# TIME: 0.43
# MEMORY: 30.1M

for _ in range(int(input())):
    n = int(input())
    a = set(filter((0).__ne__, map(int, input().split(" "))))
    print(len(a))



