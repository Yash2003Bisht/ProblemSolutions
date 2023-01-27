# QUESTION URL: https://www.hackerrank.com/challenges/maximize-it/problem
# STATUS: Accepted

from itertools import product

K, M = map(int, input().split(' '))
value = []
max_value = 0

for i in range(K):
    value.append(list(map(int, input().rstrip().split(' ')[1:])))

possible_combinations = list(product(*value, repeat=1))
for i in possible_combinations:
    max_value = max(sum(map(lambda x: x**2, i))%M, max_value)
print(max_value)

