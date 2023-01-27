# QUESTION URL: https://www.hackerrank.com/challenges/beautiful-triplets/problem
# STATUS: Terminated due to timeout

from itertools import combinations
n, d = map(int, input().split(" "))
arr = list(map(int, input().split(" ")))
arr_combinations = combinations(arr, 3)
print(sum([1 for combination in arr_combinations if combination[1] - combination[0] == combination[2] - combination[1] == d]))
