# DATE: 27/09/2022, 06:53:24
# PROBLEM NAME: Maximum Length Even Subarray
# PROBLEM URL: https://www.codechef.com/problems/MXEVNSUB
# PROBLEM DIFFICULTY RATTING: 1221
# STATUS: accepted
# TIME: 0.07
# MEMORY: 9.5M

for _ in range(int(input())):
    n = int(input())

    if  (n*(n + 1))/2 % 2==0:
        print(n)
        
    else:
        print(n-1)


