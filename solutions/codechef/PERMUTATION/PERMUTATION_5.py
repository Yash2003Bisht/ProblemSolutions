# QUESTION URL: https://www.codechef.com/problems/PERMUTATION
# STATUS: accepted
# TIME: 0.10
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    a = sorted(map(int, input().split()))
    ans = (n*(n+1))//2 - sum(a)

    for i in range(1, n+1):
        if a[i-1] > i:
            ans = -1
            break
    
    print(ans)

    

