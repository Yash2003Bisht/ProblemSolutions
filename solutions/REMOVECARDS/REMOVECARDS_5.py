# QUESTION URL: https://www.codechef.com/problems/REMOVECARDS

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = Counter(map(int, input().split()))
    a_lst = sorted(a, key=lambda x: a[x], reverse=True)
    print(n-a[a_lst[0]])
    
    

