# QUESTION URL: https://www.hackerrank.com/challenges/repeated-string/problem
# STATUS: Runtime Error

s = input()
n = int(input())

if s == 'a':
    print(n)
    quit()
elif n%len(s) == 0:
    substring = s*(n//len(s))
else:
    substring = s*(n//len(s)) + s[:n%len(s)]

print(substring.count('a'))
