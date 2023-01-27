# QUESTION URL: https://www.hackerrank.com/challenges/itertools-combinations/problem
# STATUS: Accepted

from itertools import combinations

s, k = input().split(' ')
for i in range(1,int(k)+1):
    result = combinations(sorted(s), i)
    for j in result:
        print("".join(j))
