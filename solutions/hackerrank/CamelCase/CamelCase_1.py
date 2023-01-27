# QUESTION URL: https://www.hackerrank.com/challenges/camelcase/problem
# STATUS: Accepted

import re
s = input()
result = len(re.findall('[a-z][^A-Z]*', s))
print(result)
