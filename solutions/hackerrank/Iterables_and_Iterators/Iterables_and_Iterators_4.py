# QUESTION URL: https://www.hackerrank.com/challenges/iterables-and-iterators/problem
# STATUS: Accepted

from itertools import combinations
N = int(input())
letters = input().split(' ')
K = int(input())
counter = 0
groups = list(combinations(letters, K))

for group in groups:
    if 'a' in group:
        counter += 1
print(f"{counter/len(groups):.3f}")
