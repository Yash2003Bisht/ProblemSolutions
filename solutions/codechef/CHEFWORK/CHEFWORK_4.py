# DATE: 17/09/2022, 07:28:38
# PROBLEM NAME: Workers
# PROBLEM URL: https://www.codechef.com/problems/CHEFWORK
# PROBLEM DIFFICULTY RATTING: 1146
# STATUS: compilation error
# TIME: -
# MEMORY: -

n = int(input())
c = list(map(int, input().split()))
t = list(map(int, input().split()))
min_t = 100000
min_a = 100000
min_at = 100000
for i in range(n):
    if t[i]==1 and min_t>c[i]:
        min_t = c[i]
    elif t[i]==2 and min_a>c[i]:
        min_a = c[i]
    else t[i]==3 and min_at>c[i]:
        min_at = c[i]

print(min_t + min_a if min_t + min_a < min_at else min_at)


