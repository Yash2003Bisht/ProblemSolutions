# QUESTION URL: https://www.codechef.com/problems/ODDPAIRS

from itertools import permutations

for _ in range(int(input())):
    n = int(input())
    print(2*((n+1)//2)*(n//2))


