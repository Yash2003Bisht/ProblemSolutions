# QUESTION URL: https://www.hackerrank.com/challenges/re-sub-regex-substitution/problem
# STATUS: Wrong Answer

import re


def replaceAndOr(match):
    if match.group(0) == " && ":
        return " and "
    elif match.group(0) == " || ":
        return " or "


for i in range(int(input())):
    print(re.sub(r"( && | \|\| )", replaceAndOr, input()))

