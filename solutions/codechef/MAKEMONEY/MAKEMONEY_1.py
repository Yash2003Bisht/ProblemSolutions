# QUESTION URL: https://www.codechef.com/problems/MAKEMONEY
# STATUS: accepted
# TIME: 0.04
# MEMORY: 9.6M

import sys

for _ in range(int(sys.stdin.readline())):
    n, x, c = map(int, sys.stdin.readline().split())
    a = list(map(int, sys.stdin.readline().split()))
    counter = 0
    
    for i in a:
        if x - i > c:
            counter += x - c
        else:
            counter += i
    
    print(counter)
    

