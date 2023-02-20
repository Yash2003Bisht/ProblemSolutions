# DATE: 29/07/2022, 06:42:50
# PROBLEM NAME: Waiting Time
# PROBLEM URL: https://www.codechef.com/problems/WAITTIME
# PROBLEM DIFFICULTY RATTING: 319
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.1M

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    total_days = x*7
    print(total_days - y)

