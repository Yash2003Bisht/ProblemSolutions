# DATE: 09/09/2022, 07:17:46
# PROBLEM NAME: Peak Finding
# PROBLEM URL: https://www.codechef.com/problems/UWCOI20A
# PROBLEM DIFFICULTY RATTING: 1078
# STATUS: accepted
# TIME: 0.38
# MEMORY: 13.6M

for _ in range(int(input())):
    n = int(input())
    lst = []
    for _ in range(n):
        lst.append(int(input()))
    
    print(max(lst))

