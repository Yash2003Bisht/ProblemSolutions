# QUESTION URL: https://www.hackerrank.com/challenges/strong-password/problem
# STATUS: Wrong Answer

import re
input()
password = input()
add_more = 0


if not re.search(r"\d", password):
    add_more += 1

if not re.search(r"[a-z]", password):
    add_more += 1

if not re.search(r"[A-Z]", password):
    add_more += 1

if not re.search(r"[!@#$%^&*()-+]", password):
    add_more += 1


print(max(add_more, 6-len(password)))

