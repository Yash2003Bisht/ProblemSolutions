# QUESTION URL: https://www.hackerrank.com/challenges/repeated-string/problem
# STATUS: Accepted

s = input()
n = int(input())

if 'a' not in s:
    print(0)

elif n%len(s) == 0:
    print((n//len(s))*s.count('a'))

else:
    print((n//len(s))*s.count('a') + s[:n%len(s)].count('a'))
