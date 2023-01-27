# QUESTION URL: https://www.hackerrank.com/challenges/reduced-string/problem
# STATUS: Accepted

s = list(input())
i = 0
while True:
    try:
        if s[i] == s[i+1]:
            s.pop(i)
            s.pop(i)
            i = 0
            continue
    except IndexError:
        break
    i += 1

if len(s) == 0:
    print("Empty String")
else:
    print("".join(s))

