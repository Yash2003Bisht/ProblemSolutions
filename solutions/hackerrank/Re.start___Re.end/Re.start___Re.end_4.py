# QUESTION URL: https://www.hackerrank.com/challenges/re-start-re-end/problem
# STATUS: Accepted

import re
s = input()
k = input()
flag = True
for i in re.finditer(r'(?=('+k+'))', s):
    flag = False
    print((i.start(1), i.end(1) - 1))
if flag:
    print((-1,-1))
