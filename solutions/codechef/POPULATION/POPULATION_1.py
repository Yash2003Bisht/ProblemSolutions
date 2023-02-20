# DATE: 10/08/2022, 08:32:15
# PROBLEM NAME: Final Population
# PROBLEM URL: https://www.codechef.com/problems/POPULATION
# PROBLEM DIFFICULTY RATTING: 358
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.5M

for _ in range(int(input())):
    x, y, z = map(int, input().split(" "))
    print(x-y+z)

