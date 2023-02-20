# DATE: 16/12/2022, 06:06:38
# PROBLEM NAME: Processing a string
# PROBLEM URL: https://www.codechef.com/problems/KOL15A
# PROBLEM DIFFICULTY RATTING: 1125
# STATUS: wrong answer
# TIME: 0.09
# MEMORY: 12.4M

print(sum([int(i) for _ in range(int(input())) for i in input() if i.isdigit()]))


