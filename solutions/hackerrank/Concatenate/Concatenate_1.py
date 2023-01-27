# QUESTION URL: https://www.hackerrank.com/challenges/np-concatenate/problem
# STATUS: Accepted

import numpy

m, n, p = map(int, input().split(' '))
lst = [list(map(int, input().rstrip().split(" "))) for _ in range(m+n)]
print(numpy.array(lst))
