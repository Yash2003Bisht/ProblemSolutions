# QUESTION URL: https://www.hackerrank.com/challenges/mars-exploration/problem
# STATUS: Accepted

s = input()
sos = 'SOS'
n = len(s)
count = 0
for i in range(n):
    if not s[i] == sos[i%3]:
        count += 1
print(count)
