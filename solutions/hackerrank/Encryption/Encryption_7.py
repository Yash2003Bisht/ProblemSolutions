# QUESTION URL: https://www.hackerrank.com/challenges/encryption/problem
# STATUS: Wrong Answer

import math
n = input().replace(' ', '')
lst = []
row = int(math.sqrt(len(n)))
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
