# QUESTION URL: https://www.codechef.com/problems/EQSARRAY
# STATUS: accepted
# TIME: 0.63
# MEMORY: 24.9M

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    
    if k in a[:max(1, n-1)]:
        print("Yes")
    else:
        print("No")

