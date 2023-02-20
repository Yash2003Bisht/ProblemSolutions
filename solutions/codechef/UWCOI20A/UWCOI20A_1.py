# DATE: 09/09/2022, 07:19:29
# PROBLEM NAME: Peak Finding
# PROBLEM URL: https://www.codechef.com/problems/UWCOI20A
# PROBLEM DIFFICULTY RATTING: 1078
# STATUS: accepted
# TIME: 0.37
# MEMORY: 9.4M

for _ in range(int(input())):
    n = int(input())
    max_mountain = 0
    for _ in range(n):
        mountain = int(input())
        if mountain > max_mountain:
            max_mountain = mountain
    
    print(max_mountain)

