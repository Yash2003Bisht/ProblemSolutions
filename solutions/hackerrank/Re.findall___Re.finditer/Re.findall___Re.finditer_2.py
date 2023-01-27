# QUESTION URL: https://www.hackerrank.com/challenges/re-findall-re-finditer/problem
# STATUS: Wrong Answer

import re
s = input()
constant = "qwrtypsdfghjklzxcvbnm"
match = re.finditer(r'(?<=['+constant+'])[aeiou]{2,}(?=['+constant+'])', s, flags= re.IGNORECASE)
if match:
    for i in match:
        print(i.group(0))
else:
    print(-1)
