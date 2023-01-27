# QUESTION URL: https://www.hackerrank.com/challenges/validate-list-of-email-address-with-filter/problem
# STATUS: Accepted

import re
def fun(s):
    # return True if s is a valid email, else return False
    # re.search(r"[a-zA-Z0-9_-]@[a-zA-Z0-9]*\.[a-zA-Z]{1,3}$", s)
    # return bool(re.search(r"^[a-zA-Z0-9_-]+@[a-zA-Z]+$",s))
    return bool(re.search(r"^[a-zA-Z0-9_-]+@[a-zA-Z0-9]*\.[a-zA-Z]{1,3}$", s))

