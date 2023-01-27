# QUESTION URL: https://www.hackerrank.com/challenges/re-sub-regex-substitution/problem
# STATUS: Accepted

import re

for i in range(int(input())):
    print(re.sub(r"(?<= )(\|\||&&)(?= )", lambda x: "and" if x.group(0) == "&&" else "or", input()))

