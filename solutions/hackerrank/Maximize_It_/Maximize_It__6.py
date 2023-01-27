# QUESTION URL: https://www.hackerrank.com/challenges/maximize-it/problem
# STATUS: Runtime Error

from itertools import product

K, M = map(int, input().split(' '))
value = []
max_value = 0

for i in range(K):
    value.append(list(map(int, input().rstrip().split(' ')[1:])))

possible_combinations = list(product(*value, repeat=1))
print(possible_combinations)
for i in possible_combinations:
    value = sum([j**2 for j in i])%M
    if value > max_value:
        max_value = value
print(max_value)

