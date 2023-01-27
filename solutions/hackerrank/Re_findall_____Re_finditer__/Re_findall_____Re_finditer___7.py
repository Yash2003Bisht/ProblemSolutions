# QUESTION URL: https://www.hackerrank.com/challenges/re-findall-re-finditer/problem
# STATUS: Wrong Answer

import re

data = list(map(lambda x: x.group()[1:len(x.group())-1], re.finditer(r"[QWRTYPSDFGHJKLZXCVBNMqwrtypsdfghjklzxcvbnm]{1}[aeiouAEIOU]{2,100}[QWRTYPSDFGHJKLZXCVBNMqwrtypsdfghjklzxcvbnm]{1}", input())))
print("\n".join(data))
