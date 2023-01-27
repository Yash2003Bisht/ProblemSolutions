# QUESTION URL: https://www.hackerrank.com/challenges/maximize-it/problem
# STATUS: Wrong Answer

from itertools import product

K, M = map(int, input().split(' '))
value = []
max_value = set()

for i in range(K):
    value.append(list(map(int, input().rstrip().split(' '))))

for i in set(product(*value)):
    max_value.add(sum([j**2 for j in i])%M)

print(max(max_value))
