# QUESTION URL: https://www.hackerrank.com/challenges/re-findall-re-finditer/problem
# STATUS: Accepted

import re

data = list(map(lambda x: x.group()[:len(x.group()) - 1], re.finditer(r"[aeiouAEIOU]{2,100}[QWRTYPSDFGHJKLZXCVBNMqwrtypsdfghjklzxcvbnm]{1}", input())))
if len(data):
    print("\n".join(data))
else:
    print(-1)
