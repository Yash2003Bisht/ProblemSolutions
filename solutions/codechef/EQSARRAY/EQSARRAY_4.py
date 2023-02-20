# DATE: 19/11/2022, 06:50:25
# PROBLEM NAME: Nahaane Jaa
# PROBLEM URL: https://www.codechef.com/problems/EQSARRAY
# PROBLEM DIFFICULTY RATTING: 1280
# STATUS: accepted
# TIME: 0.63
# MEMORY: 24.9M

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    
    if k in a[:max(1, n-1)]:
        print("Yes")
    else:
        print("No")

