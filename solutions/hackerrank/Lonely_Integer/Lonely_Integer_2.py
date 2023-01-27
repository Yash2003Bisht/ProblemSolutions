# QUESTION URL: https://www.hackerrank.com/challenges/lonely-integer/problem
# STATUS: Accepted

from collections import Counter

input()
for key, value in Counter(input().split(" ")).items():
    if value == 1:
        print(key)
        break

