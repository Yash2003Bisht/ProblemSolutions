# QUESTION URL: https://www.hackerrank.com/challenges/itertools-combinations/problem
# STATUS: Wrong Answer

from itertools import combinations

s, k = input().split(' ')
s = sorted(s)
result = combinations(sorted(s), int(k))
for i in s:
    print(i)
for i in result:
    print(f"{i[0]}{i[1]}")
