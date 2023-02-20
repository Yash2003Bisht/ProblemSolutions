# DATE: 01/12/2022, 06:41:34
# PROBLEM NAME: Counting Problem
# PROBLEM URL: https://www.codechef.com/problems/COUNTP
# PROBLEM DIFFICULTY RATTING: 1065
# STATUS: wrong answer
# TIME: 0.00
# MEMORY: 0M

for _ in range(int(input())):
    n = int(input())
    a = list(map(lambda value: value%2 == 0, map(int, input().split())))
    
    if a.count(False) == n and n > 2:
        print('NO')
    elif a.count(False) >= 2:
        print('YES')
    else:
        print('NO')

