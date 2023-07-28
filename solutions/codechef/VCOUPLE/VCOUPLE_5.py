# DATE: 28/07/2023, 07:33:16
# PROBLEM NAME: B - Valentine Couples
# PROBLEM URL: https://www.codechef.com/problems/VCOUPLE
# PROBLEM DIFFICULTY RATTING: 1412
# STATUS: accepted
# TIME: 0.07
# MEMORY: 11.4M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    total = 0
    
    a.sort()
    b.sort(reverse=True)
    
    for i in range(n):
        total = max(total, a[i] + b[i])
    
    print(total)


