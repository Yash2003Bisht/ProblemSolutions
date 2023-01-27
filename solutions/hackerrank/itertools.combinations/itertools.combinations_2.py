# QUESTION URL: https://www.hackerrank.com/challenges/itertools-combinations/problem
# STATUS: Accepted

from itertools import combinations

s, k = input().split(' ')
s = sorted(s)
for i in range(1,int(k)+1):
    result = combinations(s, i)
    for j in result:
        print("".join(j))
