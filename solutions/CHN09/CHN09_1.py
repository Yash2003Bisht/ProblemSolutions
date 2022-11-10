# QUESTION URL: https://www.codechef.com/problems/CHN09
# STATUS: accepted
# TIME: 0.08
# MEMORY: 66.8M

from collections import Counter

for _ in range(int(input())):
    s = Counter(input())
    print(0 if s.get('a') is None or s.get('b') is None else min(s.get('a'), s.get('b')))

