# QUESTION URL: https://www.hackerrank.com/challenges/making-anagrams/problem
# STATUS: Accepted

from collections import Counter
s1 = Counter(list(input()))
s2 = Counter(list(input()))
a = s1 - s2
b = s2 - s1
print(sum((a+b).values()))
