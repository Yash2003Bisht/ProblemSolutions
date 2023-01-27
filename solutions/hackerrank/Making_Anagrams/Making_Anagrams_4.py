# QUESTION URL: https://www.hackerrank.com/challenges/making-anagrams/problem
# STATUS: Accepted

from collections import Counter
s1 = Counter(list(input()))
s2 = Counter(list(input()))
deletion = 0
for key, value in s1.items():
    alphabet1 = s1.get(key)
    alphabet2 = s2.get(key)
    if alphabet2 is None:
        deletion += value
    else:
        deletion += abs(alphabet1 - alphabet2)
        del s2[key]
print(deletion + sum(s2.values()))
