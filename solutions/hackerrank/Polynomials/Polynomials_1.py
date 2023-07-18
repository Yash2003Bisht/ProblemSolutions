# QUESTION URL: https://www.hackerrank.com/challenges/np-polynomials/problem
# STATUS: Accepted

import numpy as np

polynomial = list(map(float, input().split()))
x = int(input())

print(np.polyval(polynomial, x))
