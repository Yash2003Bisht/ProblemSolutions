# DATE: 23/08/2022, 06:06:13
# PROBLEM NAME: Air Conditioner Temperature
# PROBLEM URL: https://www.codechef.com/problems/ACTEMP
# PROBLEM DIFFICULTY RATTING: 584
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    a, b, c = map(int, input().split())
    if b>=a and b>=c:
        print('Yes')
    else:
        print('No')

