# QUESTION URL: https://www.hackerrank.com/challenges/re-group-groups/problem
# STATUS: Accepted

s = input()
for i in range(len(s) - 1):
    if s[i] == s[i+1] and s[i].isalnum():
        print(s[i])
        break
else:
    print(-1)
