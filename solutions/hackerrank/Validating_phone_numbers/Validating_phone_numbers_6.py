# QUESTION URL: https://www.hackerrank.com/challenges/validating-the-phone-number/problem
# STATUS: Wrong Answer

import re
for _ in range(int(input())):
    num = bool(re.search(r"[7-9]([0-9]{9}$)", input()))

    if num:
        print("YES")
    else:
        print("NO")
