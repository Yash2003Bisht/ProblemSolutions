# QUESTION URL: https://www.hackerrank.com/challenges/re-sub-regex-substitution/problem
# STATUS: Wrong Answer

import re


def replaceAndOr(match):
    for i in match.groups():
        if i == " && ":
            return " and "
        elif i == " || ":
            return " or "


for i in range(int(input())):
    n = input()
    print(re.sub(r"(?<= )(&&|\|\|)(?= )", replaceAndOr, n))

