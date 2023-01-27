# QUESTION URL: https://www.hackerrank.com/challenges/np-array-mathematics/problem
# STATUS: Wrong Answer

import numpy
n, m = input().split(" ")
a = list(map(int, input().split(" ")))
b = list(map(int, input().split(" ")))

print(f"[{numpy.add(a, b)}]")
print(f"[{numpy.subtract(a,b)}]")
print(f"[{numpy.multiply(a,b)}]")
print(f"[{numpy.floor_divide(a,b)}]")
print(f"[{numpy.mod(a,b)}]")
print(f"[{numpy.power(a,b)}]")
