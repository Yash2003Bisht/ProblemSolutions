# QUESTION URL: https://www.hackerrank.com/challenges/py-the-captains-room/problem
# STATUS: Wrong Answer

k = int(input())
s = list(map(int, input().strip().split(' ')))

for i in range(len(s)):
    value = s.pop(i)
    if value not in s:
        print(value)
        break

