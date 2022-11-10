# QUESTION URL: https://www.codechef.com/problems/REMOVECARDS
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = Counter(map(int, input().split()))
    print(n-max(list(a.values())))
    
    

