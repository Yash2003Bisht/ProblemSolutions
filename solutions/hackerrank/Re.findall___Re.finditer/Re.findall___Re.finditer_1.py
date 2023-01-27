# QUESTION URL: https://www.hackerrank.com/challenges/re-findall-re-finditer/problem
# STATUS: Accepted

import re
s = input()
constant = "qwrtypsdfghjklzxcvbnm"
match = re.findall(r'(?<=['+constant+'])[aeiou]{2,}(?=['+constant+'])', s, flags= re.I)
if match:
    for i in match:
        print(i)
else:
    print(-1)
