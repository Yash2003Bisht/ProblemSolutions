# QUESTION URL: https://www.codechef.com/problems/LUCKYFR

from collections import Counter

for _ in range(int(input())):
    s = Counter(input())
    occurrence = s.get('4')
    print(0 if occurrence is None else occurrence)

