# QUESTION URL: https://www.hackerrank.com/challenges/re-group-groups/problem
# STATUS: Wrong Answer

s = input()
for i in range(len(s) - 1):
    if s[i] == s[i+1] and s[i].isdigit():
        print(s[i])
        break
