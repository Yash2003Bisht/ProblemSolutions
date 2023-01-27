# QUESTION URL: https://www.hackerrank.com/challenges/compress-the-string/problem
# STATUS: Accepted

from itertools import groupby
s = input()
groups = []
for i, j in groupby(s):
    groups.append(f"({len(list(j))}, {i})")
print(" ".join(groups))
    
