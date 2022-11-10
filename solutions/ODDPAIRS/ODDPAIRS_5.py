# QUESTION URL: https://www.codechef.com/problems/ODDPAIRS
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

from itertools import permutations

for _ in range(int(input())):
    n = int(input())
    print(2*((n+1)//2)*(n//2))


