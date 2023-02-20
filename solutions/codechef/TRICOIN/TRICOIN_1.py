# DATE: 24/08/2022, 05:49:18
# PROBLEM NAME: Coins And Triangle
# PROBLEM URL: https://www.codechef.com/problems/TRICOIN
# PROBLEM DIFFICULTY RATTING: 1075
# STATUS: accepted
# TIME: 0.67
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    height = 1
    while True:
        if height*(height+1)/2 > n:
            print(height-1)
            break
        height += 1

