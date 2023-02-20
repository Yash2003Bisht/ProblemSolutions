# DATE: 13/10/2022, 05:36:28
# PROBLEM NAME: Card Removal
# PROBLEM URL: https://www.codechef.com/problems/REMOVECARDS
# PROBLEM DIFFICULTY RATTING: 1039
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = Counter(map(int, input().split()))
    a_lst = sorted(a, key=lambda x: a[x], reverse=True)
    print(n-a[a_lst[0]])
    
    

