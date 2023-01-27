# QUESTION URL: https://www.hackerrank.com/challenges/np-array-mathematics/problem
# STATUS: Wrong Answer

import numpy

N, M = map(int, input().split(" "))

for _ in range(N):
    a  = list(map(int, input().split(" ")))
    b  = list(map(int, input().split(" ")))
    print("[" + f"{numpy.add(a, b)}" + "]")
    print("[" + f"{numpy.subtract(a, b)}" + "]")
    print("[" + f"{numpy.multiply(a, b)}" + "]")
    print("[" + f"{numpy.divmod(a, b)[0]}" + "]")
    print("[" + f"{numpy.mod(a, b)}" + "]")
    print("[" + f"{numpy.power(a, b)}" + "]")
