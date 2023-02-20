# DATE: 22/10/2022, 06:56:15
# PROBLEM NAME: Minimise LCS
# PROBLEM URL: https://www.codechef.com/problems/MINLCS
# PROBLEM DIFFICULTY RATTING: 1367
# STATUS: accepted
# TIME: 0.06
# MEMORY: 10.1M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    b = input()
    a = input()
    c = Counter(a + b)
    most_commons = c.most_common()
    lcs = [min(a.count(most_common[0][0]), b.count(most_common[0][0])) for most_common in most_commons]
    print(max(lcs))





