# QUESTION URL: https://www.hackerrank.com/challenges/camelcase/problem
# STATUS: Accepted

s = input()
counter = 0
for i in range(len(s)):
    if s[i].capitalize() == s[i]:
        counter += 1
if s[0] != s[0].capitalize():
    counter += 1

print(counter)
