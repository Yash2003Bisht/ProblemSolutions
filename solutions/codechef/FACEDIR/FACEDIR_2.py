# DATE: 09/02/2024, 07:04:47
# PROBLEM NAME: Find the Direction
# PROBLEM URL: https://www.codechef.com/problems/FACEDIR
# PROBLEM DIFFICULTY RATTING: 880
# STATUS: accepted
# TIME: 0.02
# MEMORY: 8.5M

directions = ["North", "East", "South", "West"]

for _ in range(int(input())):
    
    x = int(input())
    print(directions[x%4])


