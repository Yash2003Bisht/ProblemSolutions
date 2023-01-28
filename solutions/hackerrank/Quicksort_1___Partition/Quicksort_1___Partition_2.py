# QUESTION URL: https://www.hackerrank.com/challenges/quicksort1/problem
# STATUS: Accepted

n = int(input())
a = list(map(int, input().split()))
a.sort()
print(" ".join(map(str, a)))
