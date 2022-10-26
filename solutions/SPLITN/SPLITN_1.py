# QUESTION URL: https://www.codechef.com/problems/SPLITN

import math

T = int(input())

for _ in range(T):
    n = int(input())
    count = 0
    while(n>0):
        x = math.floor(math.log2(n))
        n = n - (math.pow(2,x))
        if n == 0:
            break
        count += 1
    print(count)

