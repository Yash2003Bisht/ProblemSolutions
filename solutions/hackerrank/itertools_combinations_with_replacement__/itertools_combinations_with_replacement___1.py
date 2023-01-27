# QUESTION URL: https://www.hackerrank.com/challenges/itertools-combinations-with-replacement/problem
# STATUS: Accepted

from itertools import combinations_with_replacement

s, k = input().split()

for i in combinations_with_replacement(sorted(s), int(k)):
    print("".join(i))
