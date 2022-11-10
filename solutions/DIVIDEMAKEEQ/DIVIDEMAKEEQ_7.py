# QUESTION URL: https://www.codechef.com/problems/DIVIDEMAKEEQ
# STATUS: accepted
# TIME: 0.89
# MEMORY: 10.4M

import math

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    gcd_a = a[0]
    count = 0
    
    for i in a:
        gcd_a = math.gcd(gcd_a, i)
    
    for i in a:
        if i != gcd_a:
            count += 1

    
    print(count)
    
    

