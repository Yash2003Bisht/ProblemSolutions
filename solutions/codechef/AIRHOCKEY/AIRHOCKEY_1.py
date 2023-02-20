# DATE: 30/07/2022, 06:25:55
# PROBLEM NAME: Air Hockey
# PROBLEM URL: https://www.codechef.com/problems/AIRHOCKEY
# PROBLEM DIFFICULTY RATTING: 366
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.2M

for _ in range(int(input())):
    n, x = map(int, input().split(" "))
    print(7 - max(n, x))

