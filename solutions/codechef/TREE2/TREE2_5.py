# DATE: 17/08/2022, 06:29:25
# PROBLEM NAME: A Problem on Sticks
# PROBLEM URL: https://www.codechef.com/problems/TREE2
# PROBLEM DIFFICULTY RATTING: 1199
# STATUS: accepted
# TIME: 0.42
# MEMORY: 30.1M

for _ in range(int(input())):
    n=int(input())
    l=set(map(int,input().split()))
    if 0 in l:
        l.remove(0)
    print(len(l))
    

