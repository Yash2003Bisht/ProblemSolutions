# QUESTION URL: https://www.hackerrank.com/challenges/validating-uid/problem
# STATUS: Accepted

import re

for _ in range(int(input())):
    s = input()
    regex_match = re.match(r"^(?!.*(.).*\1)(?=(.*[A-Z]){2})(?=(.*\d){3})[A-Za-z0-9]{5,}$", s)
    
    if regex_match:
        print("Valid")
    else:
        print("Invalid")
