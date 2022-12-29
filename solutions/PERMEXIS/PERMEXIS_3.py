# QUESTION URL: https://www.codechef.com/problems/PERMEXIS
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

