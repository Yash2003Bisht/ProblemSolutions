# QUESTION URL: https://www.hackerrank.com/challenges/encryption/problem
# STATUS: Wrong Answer

import math
s = input().replace(" ", "")
row = int(math.sqrt(len(s)))
column = row+1
lst = []
last_column = column*2 - 1
for i in range(column):
    try:
        lst.append(s[i] + s[i+column] + s[i+last_column+1])
    except IndexError:
        lst.append(s[i] + s[i+column])

print(" ".join(lst))
