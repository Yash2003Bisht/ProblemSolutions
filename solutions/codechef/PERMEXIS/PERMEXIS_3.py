# DATE: 28/12/2022, 09:47:45
# PROBLEM NAME: Watson asks Does Permutation Exist
# PROBLEM URL: https://www.codechef.com/problems/PERMEXIS
# PROBLEM DIFFICULTY RATTING: 1207
# STATUS: accepted
# TIME: 0.09
# MEMORY: 24.5M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    
    for i in range(n-1):
        if abs(a[i] - a[i+1]) > 1:
            print('NO')
            break
    else:
        print('YES')

