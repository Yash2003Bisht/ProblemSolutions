# QUESTION URL: https://www.hackerrank.com/challenges/np-concatenate/problem
# STATUS: Accepted

import numpy

lst = []
m, n, p = map(int, input().split(' '))
for _ in range(m+n):
    lst.append(list(map(int, input().rstrip().split(" "))))
print(numpy.array(lst))
