# QUESTION URL: https://www.codechef.com/problems/XJUMP

# cook your dish here
import math
for _ in range(int(input())):
    n, h=map(int,input().split())
    print(n//h+n%h)

