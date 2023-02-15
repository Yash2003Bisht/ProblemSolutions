# QUESTION URL: https://www.codechef.com/problems/CHEFSETC
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

from itertools import combinations

for _ in range(int(input())):
    a, b, c, d = map(int, input().split())
    lst = []
    
    for i in range(1, 5):
        all_comb = combinations([a, b, c, d], i)
        for comb in all_comb:
            lst.append(list(comb))
    
    for comb in lst:
        if sum(comb) == 0:
            print("Yes")
            break
    else:
        print("No")

