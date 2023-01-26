# QUESTION URL: https://www.codechef.com/problems/EQSARRAY
# STATUS: accepted
# TIME: 0.64
# MEMORY: 24.8M

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    
    for i in range(max(1, n-1)):
        if a[i] == k:
            print("Yes")
            break
    else:
        print("No")

