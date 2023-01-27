# QUESTION URL: https://www.hackerrank.com/challenges/equality-in-a-array/problem
# STATUS: Accepted

from statistics import mode
n = int(input())
arr = input().split(' ')
print(len(arr)-arr.count(mode(arr)))
