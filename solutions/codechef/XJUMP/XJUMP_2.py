# QUESTION URL: https://www.codechef.com/problems/XJUMP
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.5M

# cook your dish here
import math
for _ in range(int(input())):
    n, h=map(int,input().split())
    print(n//h+n%h)

