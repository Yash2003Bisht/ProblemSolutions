# QUESTION URL: https://www.hackerrank.com/challenges/np-shape-reshape/problem
# STATUS: Accepted

import numpy

n = list(map(int, input().split(" ")))
shape = numpy.array(n)
print(numpy.reshape(shape, (3,3)))
