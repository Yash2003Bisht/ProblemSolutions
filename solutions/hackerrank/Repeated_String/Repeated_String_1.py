# QUESTION URL: https://www.hackerrank.com/challenges/repeated-string/problem
# STATUS: Accepted

s = input()
n = int(input())

print(s.count('a') * (n // len(s)) + s[:n%len(s)].count('a'))
