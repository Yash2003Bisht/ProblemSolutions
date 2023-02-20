# DATE: 17/11/2022, 07:04:36
# PROBLEM NAME: Candies
# PROBLEM URL: https://www.codechef.com/problems/CNDY
# PROBLEM DIFFICULTY RATTING: 1018
# STATUS: accepted
# TIME: 0.03
# MEMORY: 10M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = Counter(map(int, input().split()))
    
    for key, value in a.items():
        if value >= 3:
            print("No")
            break
    
    else:
        print("Yes")


