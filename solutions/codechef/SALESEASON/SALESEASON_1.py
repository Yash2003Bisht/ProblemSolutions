# DATE: 12/08/2022, 09:16:32
# PROBLEM NAME: Sale Season
# PROBLEM URL: https://www.codechef.com/problems/SALESEASON
# PROBLEM DIFFICULTY RATTING: 541
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    x = int(input())
    if x <= 100:
        print(x)
    elif x <= 1000:
        print(x-25)
    elif x <= 5000:
        print(x-100)
    else:
        print(x-500)

