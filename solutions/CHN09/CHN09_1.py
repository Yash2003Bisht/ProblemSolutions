# QUESTION URL: https://www.codechef.com/problems/CHN09
# STATUS: accepted

from collections import Counter

for _ in range(int(input())):
    s = Counter(input())
    print(0 if s.get('a') is None or s.get('b') is None else min(s.get('a'), s.get('b')))

