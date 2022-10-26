# QUESTION URL: https://www.codechef.com/problems/MINLCS

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    b = input()
    a = input()
    c = Counter(a + b)
    most_commons = c.most_common()
    lcs = [min(a.count(most_common[0][0]), b.count(most_common[0][0])) for most_common in most_commons]
    print(max(lcs))





