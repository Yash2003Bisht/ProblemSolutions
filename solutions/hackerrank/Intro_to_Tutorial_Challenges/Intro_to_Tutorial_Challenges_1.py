# QUESTION URL: https://www.hackerrank.com/challenges/tutorial-intro/problem
# STATUS: Accepted

from bisect import bisect
v = int(input())
input()
arr = list(map(int, input().split(" ")))
print(bisect(arr,v)-1)
