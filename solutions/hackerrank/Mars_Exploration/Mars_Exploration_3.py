# QUESTION URL: https://www.hackerrank.com/challenges/mars-exploration/problem
# STATUS: Wrong Answer

s = input()
counter = 0
i = 0
while i != (len(s) / 3):
    if s[i*3:(i+1)*3] != "SOS":
        counter += 1
    i += 1

print(counter)
