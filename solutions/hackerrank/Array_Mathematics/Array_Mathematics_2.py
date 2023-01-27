# QUESTION URL: https://www.hackerrank.com/challenges/np-array-mathematics/problem
# STATUS: Wrong Answer

import numpy
n, m = input().split(" ")
a = numpy.array([input().split(" ") for _ in range(int(n))], dtype=int)
b = numpy.array([input().split(" ") for _ in range(int(n))], dtype=int)
print(a+b)
print(a-b)
print(a*b)
print(a//b)
print(a-b)
print(a**b)
