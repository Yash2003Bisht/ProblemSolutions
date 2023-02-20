# DATE: 01/08/2022, 07:53:30
# PROBLEM NAME: Lucky Four
# PROBLEM URL: https://www.codechef.com/problems/LUCKYFR
# PROBLEM DIFFICULTY RATTING: 998
# STATUS: accepted
# TIME: 1.08
# MEMORY: 9.1M

from collections import Counter

for _ in range(int(input())):
    s = Counter(input())
    occurrence = s.get('4')
    print(0 if occurrence is None else occurrence)

