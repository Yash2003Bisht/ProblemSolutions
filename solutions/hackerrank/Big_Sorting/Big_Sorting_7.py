# QUESTION URL: https://www.hackerrank.com/challenges/big-sorting/problem
# STATUS: Terminated due to timeout

n = int(input().strip())

unsorted = []

for _ in range(n):
    unsorted_item = int(input())
    unsorted.append(unsorted_item)

unsorted.sort()

for i in unsorted:
    print(i)
