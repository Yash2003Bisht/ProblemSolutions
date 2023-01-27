# QUESTION URL: https://www.hackerrank.com/challenges/beautiful-triplets/problem
# STATUS: Wrong Answer

from itertools import combinations
n, d = map(int, input().split(" "))
arr = list(map(int, input().split(" ")))
arr_combinations = combinations(arr, 3)
print(arr_combinations)
