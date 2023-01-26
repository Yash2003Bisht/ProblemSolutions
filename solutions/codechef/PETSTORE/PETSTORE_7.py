# QUESTION URL: https://www.codechef.com/problems/PETSTORE
# STATUS: accepted
# TIME: 0.16
# MEMORY: 17.7M

import sys

for _ in range(int(sys.stdin.readline())):
    n = int(input())
    a = list(map(int, sys.stdin.readline().split()))
    a_set = set(a)
    
    for value in a_set:
        if a.count(value) % 2 != 0:
            sys.stdout.write("NO\n")
            break
        
    else:
        sys.stdout.write("YES\n")

