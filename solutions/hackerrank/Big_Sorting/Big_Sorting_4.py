# QUESTION URL: https://www.hackerrank.com/challenges/big-sorting/problem
# STATUS: Terminated due to timeout

unsorted = []

for _ in range(int(input())):
    unsorted.append(int(input()))

unsorted.sort()

for i in unsorted:
    print(i)

