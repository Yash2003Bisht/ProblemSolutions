# QUESTION URL: https://www.codechef.com/problems/PROC18A

for _ in range(int(input())):
    n, k = map(int, input().split())
    g = list(map(int, input().split()))
    max_g = 0
    for i in range(n-1):
        total = sum(g[i:k+i])
        if total > max_g:
            max_g = total

    print(max_g)



