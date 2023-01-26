# QUESTION URL: https://www.codechef.com/problems/MOBKUN
# STATUS: accepted
# TIME: 0.54
# MEMORY: 9.7M

for _ in range(int(input())):
    n, m, k, x = map(int, input().split())
    mob_occurrence = x // (k*n+m)
    last_day = x - mob_occurrence*((k*n)+m)
    
    if last_day > (k-1)*n or last_day == 0:
        print("YES")
    else:
        print("NO")

