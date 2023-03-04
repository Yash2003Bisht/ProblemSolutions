# DATE: 04/03/2023, 07:32:03
# PROBLEM NAME: Phone Prices
# PROBLEM URL: https://www.codechef.com/problems/S10E
# PROBLEM DIFFICULTY RATTING: 1269
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    s = list(map(int, input().split()))
    days = 1
    s = s[::-1]

    for i in range(n):
        lst = s[i+1:i+6]
        if len(lst) == 0:
            break
        elif s[i] < min(lst):
            days += 1

    print(days)



