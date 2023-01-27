# QUESTION URL: https://www.hackerrank.com/challenges/np-zeros-and-ones/problem
# STATUS: Accepted

import numpy
array = list(map(int, input().split(" ")))
print(numpy.zeros(shape=array, dtype=numpy.int))
print(numpy.ones(shape=array, dtype=numpy.int))
