# QUESTION URL: https://www.hackerrank.com/challenges/alternating-characters/problem
# STATUS: Accepted

for _ in range(int(input())):
    s = input()
    if len(set(s)) == 0:
        print(0)
    else:
        deletion = 0
        for i in range(len(s) - 1):
            if s[i] == s[i+1]:
                deletion += 1
        print(deletion)
