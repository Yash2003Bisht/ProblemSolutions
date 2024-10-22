# DATE: 26/11/2022, 05:18:24
# PROBLEM NAME: Just Like Mob!
# PROBLEM URL: https://www.codechef.com/problems/MOBKUN
# PROBLEM DIFFICULTY RATTING: 1242
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

