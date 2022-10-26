# QUESTION URL: https://www.codechef.com/problems/CFRTEST

for _ in range(int(input())):
    n = int(input())
    d = len(set(map(int, input().split())))
    
    if n == d:
        print(n)
    else:
        print(d)

