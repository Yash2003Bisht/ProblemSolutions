# DATE: 29/12/2022, 06:41:30
# PROBLEM NAME: Pet Store
# PROBLEM URL: https://www.codechef.com/problems/PETSTORE
# PROBLEM DIFFICULTY RATTING: 1126
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

