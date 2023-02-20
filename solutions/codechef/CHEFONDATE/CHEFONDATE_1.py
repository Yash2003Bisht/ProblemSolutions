# DATE: 27/07/2022, 06:34:05
# PROBLEM NAME: Chef On Date
# PROBLEM URL: https://www.codechef.com/problems/CHEFONDATE
# PROBLEM DIFFICULTY RATTING: 294
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.3M

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    print('yes' if x>=y else 'no')

