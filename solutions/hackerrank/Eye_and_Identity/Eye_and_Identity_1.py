# QUESTION URL: https://www.hackerrank.com/challenges/np-eye-and-identity/problem
# STATUS: Accepted

import numpy
numpy.set_printoptions(legacy="1.13")
a, b = map(int, input().split(" "))
print(numpy.eye(a, b))
