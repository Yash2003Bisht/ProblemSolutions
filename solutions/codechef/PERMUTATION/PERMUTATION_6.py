# DATE: 15/12/2022, 06:56:30
# PROBLEM NAME: Convert to permutation
# PROBLEM URL: https://www.codechef.com/problems/PERMUTATION
# PROBLEM DIFFICULTY RATTING: 1197
# STATUS: accepted
# TIME: 0.10
# MEMORY: 9.9M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    
    for i in range(1, n+1):
        if a[i-1] > i:
            print(-1)
            break

    else:
        print((n*(n+1))//2 - sum(a))

