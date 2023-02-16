# QUESTION URL: https://www.codechef.com/problems/EQPAIR
# STATUS: accepted
# TIME: 0.09
# MEMORY: 27.5M

from collections import Counter
import math

for _ in range(int(input())):
    n = int(input())
    a = Counter(map(int, input().split()))
    count = 0
    
    for value in a.values():
        if value > 1:
            count += math.comb(value, 2)
    
    print(count)


