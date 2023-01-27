# QUESTION URL: https://www.hackerrank.com/challenges/most-commons/problem
# STATUS: Wrong Answer

from collections import Counter
s = input()

counter = Counter(s)

i = 0
for key, values in counter.most_common():
    i += 1
    if i != 4:
        print(key, values)
    else:
        quit()
