# QUESTION URL: https://www.codechef.com/problems/CWIREFRAME

for _ in range(int(input())):
    n, m, x = map(int, input().split())
    wireframe = 2*n + 2*m
    print(wireframe*x)

