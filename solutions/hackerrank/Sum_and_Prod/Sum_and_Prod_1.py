# QUESTION URL: https://www.hackerrank.com/challenges/np-sum-and-prod/problem
# STATUS: Accepted

import numpy
n, m = map(int, input().split(" "))
lst = numpy.array([input().split() for _ in range(n)],int)
print(numpy.prod(numpy.sum(lst, axis=0)))
