# DATE: 16/12/2022, 06:13:11
# PROBLEM NAME: Processing a string
# PROBLEM URL: https://www.codechef.com/problems/KOL15A
# PROBLEM DIFFICULTY RATTING: 1125
# STATUS: accepted
# TIME: 0.09
# MEMORY: 9.7M

print("\n".join([str(sum([int(i) for i in input() if i.isdigit()])) for _ in range(int(input()))]))


