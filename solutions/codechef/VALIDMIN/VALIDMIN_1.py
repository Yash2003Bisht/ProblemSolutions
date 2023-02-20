# DATE: 05/08/2022, 06:25:38
# PROBLEM NAME: Valid Minimum
# PROBLEM URL: https://www.codechef.com/problems/VALIDMIN
# PROBLEM DIFFICULTY RATTING: 1132
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.3M

for _ in range(int(input())):
    lst = list(map(int, input().split(" ")))
    lst.sort()
    if lst[0] == lst[1]:
        print('YES')
    else:
        print('NO')

