# QUESTION URL: https://www.hackerrank.com/challenges/ginorts/problem
# STATUS: Wrong Answer

s = input()
s = sorted(s)
counter = len(s)

while counter != 0:
    if s[0].isdigit():
        value = s.pop(0)
        if int(value)%2 == 0:
            s.insert(len(s), value)
        else:
            s.insert(counter, value)
    elif s[0].upper() == s[0]:
        value = s.pop(0)
        s.insert(counter-1, value)
    counter -= 1

print("".join(s))
