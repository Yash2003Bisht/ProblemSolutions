# QUESTION URL: https://www.hackerrank.com/challenges/introduction-to-regex/problem
# STATUS: Accepted

import re
for _ in range(int(input())):
    print(bool(re.search(r"^[+-]?\d*\.\d+$",input())))
