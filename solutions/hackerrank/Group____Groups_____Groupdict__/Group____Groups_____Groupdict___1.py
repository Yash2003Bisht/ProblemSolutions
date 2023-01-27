# QUESTION URL: https://www.hackerrank.com/challenges/re-group-groups/problem
# STATUS: Accepted

import re
s = input()
m = re.search(r"([a-zA-Z0-9])\1+", s)
print(m.group(1) if m else -1)
