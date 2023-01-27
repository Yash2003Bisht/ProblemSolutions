# QUESTION URL: https://www.hackerrank.com/challenges/lonely-integer/problem
# STATUS: Accepted

from functools import reduce
input()
print(reduce(lambda x,y: x^y, map(int, input().split(" "))))
