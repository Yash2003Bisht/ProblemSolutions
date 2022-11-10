# QUESTION URL: https://www.codechef.com/problems/CFRTEST
# STATUS: accepted
# TIME: 0.13
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    d = len(set(map(int, input().split())))
    
    if n == d:
        print(n)
    else:
        print(d)

