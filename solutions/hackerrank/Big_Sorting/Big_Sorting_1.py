# QUESTION URL: https://www.hackerrank.com/challenges/big-sorting/problem
# STATUS: Wrong Answer

unsorted = []

for _ in range(int(input())):
    unsorted.append(int(input()))

unsorted.sort()

lst = list(map(str, unsorted))

