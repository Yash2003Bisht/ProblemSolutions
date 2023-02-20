# DATE: 24/11/2022, 06:35:38
# PROBLEM NAME: Chef vs Doof
# PROBLEM URL: https://www.codechef.com/problems/CLLCM
# PROBLEM DIFFICULTY RATTING: 1108
# STATUS: accepted
# TIME: 0.15
# MEMORY: 9.9M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a_odd = list(filter(lambda x: x%2 != 0, a))
    
    if len(a_odd) == n:
        print("YES")
    else:
        print("NO")

