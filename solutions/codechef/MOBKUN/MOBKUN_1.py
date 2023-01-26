# QUESTION URL: https://www.codechef.com/problems/MOBKUN
# STATUS: accepted
# TIME: 0.54
# MEMORY: 9.6M

for _ in range(int(input())):
    n, m, k, x = map(int, input().split())
    last_day = x - (x // (k*n+m))*((k*n)+m)
    
    if last_day > (k-1)*n or last_day == 0:
        print("YES")
    else:
        print("NO")

