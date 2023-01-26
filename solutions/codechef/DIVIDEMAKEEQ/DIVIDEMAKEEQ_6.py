# QUESTION URL: https://www.codechef.com/problems/DIVIDEMAKEEQ
# STATUS: accepted
# TIME: 0.69
# MEMORY: 10.5M

import math

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    gcd_a = a[0]
    
    for i in a:
        gcd_a = math.gcd(gcd_a, i)
    
    print(n-a.count(gcd_a))
    
    

