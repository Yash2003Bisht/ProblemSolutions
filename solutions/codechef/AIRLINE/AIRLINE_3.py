# DATE: 30/08/2022, 06:54:53
# PROBLEM NAME: Airline Restrictions
# PROBLEM URL: https://www.codechef.com/problems/AIRLINE
# PROBLEM DIFFICULTY RATTING: 1042
# STATUS: accepted
# TIME: 0.20
# MEMORY: 9.5M

for i in range(int(input())):
    a, b, c, d, e = map(int, input().split())
    if (a+b <= d and c <= e) or (b+c <= d and a <= e) or (a+c <= d and b <= e):
        print('YES')
    else:
        print('NO')

