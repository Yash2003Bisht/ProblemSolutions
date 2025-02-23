# DATE: 15/12/2022, 06:54:02
# PROBLEM NAME: Convert to permutation
# PROBLEM URL: https://www.codechef.com/problems/PERMUTATION
# PROBLEM DIFFICULTY RATTING: 1197
# STATUS: accepted
# TIME: 0.15
# MEMORY: 9.9M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    count = 0
    
    for i in range(1, n+1):
        if a[i-1] > i:
            print(-1)
            break
        
        elif a[i-1] < i:
            count += i - a[i-1]
    
    else:
        print(count)

