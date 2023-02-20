# DATE: 27/12/2022, 06:23:26
# PROBLEM NAME: ICPC Balloons
# PROBLEM URL: https://www.codechef.com/problems/BALLOON
# PROBLEM DIFFICULTY RATTING: 1205
# STATUS: accepted
# TIME: 0.10
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    total = 28
    i = 0

    while(total > 0):
        if a[i] <= 7:
            total -= a[i]
        
        i += 1
    
    print(i)

