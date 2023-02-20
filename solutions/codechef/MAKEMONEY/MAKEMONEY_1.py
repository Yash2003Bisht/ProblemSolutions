# DATE: 09/12/2022, 08:09:36
# PROBLEM NAME: Make Money
# PROBLEM URL: https://www.codechef.com/problems/MAKEMONEY
# PROBLEM DIFFICULTY RATTING: 1101
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
    

