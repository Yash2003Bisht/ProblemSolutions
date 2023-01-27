# QUESTION URL: https://www.hackerrank.com/challenges/camelcase/problem
# STATUS: Accepted

import re
s = input()
result = len(re.findall('[A-Z][^A-Z]*', s))
if s[0].capitalize() != s[0]:
    print(result+1)
else:
    print(result)
