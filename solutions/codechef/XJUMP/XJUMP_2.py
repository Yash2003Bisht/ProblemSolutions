# DATE: 02/11/2022, 02:37:15
# PROBLEM NAME: X Jumps
# PROBLEM URL: https://www.codechef.com/problems/XJUMP
# PROBLEM DIFFICULTY RATTING: 686
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.5M

# cook your dish here
import math
for _ in range(int(input())):
    n, h=map(int,input().split())
    print(n//h+n%h)

