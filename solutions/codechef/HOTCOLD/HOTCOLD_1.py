# DATE: 29/07/2022, 06:24:55
# PROBLEM NAME: Is it hot or cold
# PROBLEM URL: https://www.codechef.com/problems/HOTCOLD
# PROBLEM DIFFICULTY RATTING: 410
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.1M

for _ in range(int(input())):
    x = int(input())
    if x > 20:
        print("HOT")
    else:
        print("COLD")

