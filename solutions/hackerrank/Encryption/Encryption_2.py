# QUESTION URL: https://www.hackerrank.com/challenges/encryption/problem
# STATUS: Accepted

import math

s=input().replace(" ", "")

c= math.ceil(math.sqrt(len(s)))
r= c-1

for i in range(c):
    print(s[i::c], end=" ")
