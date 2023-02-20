# DATE: 29/09/2022, 06:15:31
# PROBLEM NAME: Remove Bad elements
# PROBLEM URL: https://www.codechef.com/problems/REMOVEBAD
# PROBLEM DIFFICULTY RATTING: 1100
# STATUS: accepted
# TIME: 0.09
# MEMORY: 20.2M

from collections import Counter

for _ in range(int(input())):
    input()
    print(sum(sorted(Counter(map(int, input().split())).values(), reverse=True)[1:]))


