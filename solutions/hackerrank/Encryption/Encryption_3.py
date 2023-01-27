# QUESTION URL: https://www.hackerrank.com/challenges/encryption/problem
# STATUS: Wrong Answer

import math
n = input().replace(' ', '')
lst = []
result = math.sqrt(len(n))
frac, row = math.modf(result)
row = int(row)

if frac <= 0.0:
    column = row - 1
else:
    column = row + 1

if row*column < len(n):
    row += 1

for i in range(column):
    word = n[i]
    counter = column + i
    try:
        for _ in range(row-1):
            word += n[counter]
            counter += column
    except IndexError:
        pass
    lst.append(word)
print(" ".join(lst))
