# DATE: 17/09/2022, 07:25:04
# PROBLEM NAME: Workers
# PROBLEM URL: https://www.codechef.com/problems/CHEFWORK
# PROBLEM DIFFICULTY RATTING: 1146
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.7M

n = int(input())
c = list(map(int, input().split()))
t = list(map(int, input().split()))
min_t = 100000
min_a = 100000
min_at = 100000
for i, j in zip(c, t):
    if j == 1 and min_t > i:
        min_t = i
    elif j == 2 and min_a > i:
        min_a = i
    else:
        min_at = i

print(min_t + min_a if min_t + min_a < min_at else min_at)


