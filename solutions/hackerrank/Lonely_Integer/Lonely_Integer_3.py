# QUESTION URL: https://www.hackerrank.com/challenges/lonely-integer/problem
# STATUS: Wrong Answer

from collections import Counter

input()
print(min(Counter(input().split(" ")).items())[1])


