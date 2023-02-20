# DATE: 18/10/2022, 05:44:09
# PROBLEM NAME: Devu and friendship testing
# PROBLEM URL: https://www.codechef.com/problems/CFRTEST
# PROBLEM DIFFICULTY RATTING: 1061
# STATUS: accepted
# TIME: 0.13
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    d = len(set(map(int, input().split())))
    
    if n == d:
        print(n)
    else:
        print(d)

