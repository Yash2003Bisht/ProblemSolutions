# QUESTION URL: https://www.hackerrank.com/challenges/np-dot-and-cross/problem
# STATUS: Accepted

import numpy as np

a = []
b = []
n = int(input())

for i in range(n*2):
    if i < n:
        a.append(list(map(int, input().split())))
    else:
        b.append(list(map(int, input().split())))

print(np.matmul(a, b))
