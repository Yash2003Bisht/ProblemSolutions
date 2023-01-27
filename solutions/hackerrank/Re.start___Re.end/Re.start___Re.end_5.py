# QUESTION URL: https://www.hackerrank.com/challenges/re-start-re-end/problem
# STATUS: Accepted

import re
s = input()
k = input()
reserve = 0
reserve_s = len(s)
for _ in range(len(s)):
    match = re.search(k, s)
    if bool(match):
        if reserve+1 >= reserve_s:
            break
        print((match.start(), match.end()-1))
        reserve = len(s[:match.start()+1])
        s = "%"*reserve + s[match.start()+1:]
    elif reserve == 0:
        print((-1,-1))
        break
