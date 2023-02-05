# QUESTION URL: https://www.hackerrank.com/challenges/countingsort2/problem
# STATUS: Accepted

input()

arr = list(map(int, input().split()))
arr.sort()

print(" ".join(map(str, arr)))
