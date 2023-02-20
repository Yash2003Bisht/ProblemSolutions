# DATE: 26/11/2022, 05:17:15
# PROBLEM NAME: Just Like Mob!
# PROBLEM URL: https://www.codechef.com/problems/MOBKUN
# PROBLEM DIFFICULTY RATTING: 1242
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

