# DATE: 01/12/2022, 06:55:50
# PROBLEM NAME: Counting Problem
# PROBLEM URL: https://www.codechef.com/problems/COUNTP
# PROBLEM DIFFICULTY RATTING: 1065
# STATUS: accepted
# TIME: 0.31
# MEMORY: 25M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    odd_count = list(map(lambda x: x%2 != 0, a)).count(True)
    
    if odd_count % 2 == 0 and odd_count != 0:
        print('YES')
    else:
        print('NO')

