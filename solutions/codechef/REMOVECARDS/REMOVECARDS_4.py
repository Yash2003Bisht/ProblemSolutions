# DATE: 13/10/2022, 05:38:40
# PROBLEM NAME: Card Removal
# PROBLEM URL: https://www.codechef.com/problems/REMOVECARDS
# PROBLEM DIFFICULTY RATTING: 1039
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = Counter(map(int, input().split()))
    print(n-max(list(a.values())))
    
    

