# QUESTION URL: https://www.hackerrank.com/challenges/mars-exploration/problem
# STATUS: Accepted

s = input()
counter = 0
i = 0
while len(s) != 0:
    if s[i] != "S":
        counter += 1
    if s[i+1] != "O":
        counter += 1
    if s[i+2] != "S":
        counter += 1
    s = s[3:]

print(counter)
