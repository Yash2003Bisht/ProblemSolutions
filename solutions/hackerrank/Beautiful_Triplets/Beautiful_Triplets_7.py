# QUESTION URL: https://www.hackerrank.com/challenges/beautiful-triplets/problem
# STATUS: Accepted

n, d = map(int, input().split(" "))
arr = list(map(int, input().split(" ")))
print(sum(1 for i in arr if (i+d in arr) and (i+2*d in arr)))
