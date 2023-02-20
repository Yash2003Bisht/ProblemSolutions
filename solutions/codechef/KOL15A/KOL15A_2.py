# DATE: 16/12/2022, 06:07:07
# PROBLEM NAME: Processing a string
# PROBLEM URL: https://www.codechef.com/problems/KOL15A
# PROBLEM DIFFICULTY RATTING: 1125
# STATUS: accepted
# TIME: 0.10
# MEMORY: 9.6M

for _ in range(int(input())):
    print(sum([int(i) for i in input() if i.isdigit()]))


