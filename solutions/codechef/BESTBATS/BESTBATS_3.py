# DATE: 18/01/2023, 07:49:31
# PROBLEM NAME: Top Batsmen
# PROBLEM URL: https://www.codechef.com/problems/BESTBATS
# PROBLEM DIFFICULTY RATTING: 1228
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.8M

import math

for _ in range(int(input())):
    n = list(map(int, input().split()))
    k = int(input())
    n.sort()

    max_lst = n[-k:]
    total_comb = 0
    
    for i in set(max_lst):
        comb = math.comb(n.count(i), max_lst.count(i))
        
        if comb > 1:
            total_comb += comb
    
    print(total_comb if total_comb != 0 else 1)


