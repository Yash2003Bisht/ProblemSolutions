# DATE: 27/09/2022, 06:50:53
# PROBLEM NAME: Maximum Length Even Subarray
# PROBLEM URL: https://www.codechef.com/problems/MXEVNSUB
# PROBLEM DIFFICULTY RATTING: 1221
# STATUS: accepted
# TIME: 0.65
# MEMORY: 9.8M

for _ in range(int(input())):
    n = int(input())

    if sum(list(range(n+1))) % 2==0:
        print(n)
        
    else:
        print(n-1)


