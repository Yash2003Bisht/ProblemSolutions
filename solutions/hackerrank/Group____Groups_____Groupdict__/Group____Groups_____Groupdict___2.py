# QUESTION URL: https://www.hackerrank.com/challenges/re-group-groups/problem
# STATUS: Wrong Answer

import re
s = input()
m = re.search(r"(\w)\1+", s)
print(m.group(1) if m else -1)
