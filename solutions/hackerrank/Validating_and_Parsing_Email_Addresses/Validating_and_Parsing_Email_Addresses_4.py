# QUESTION URL: https://www.hackerrank.com/challenges/validating-named-email-addresses/problem
# STATUS: Wrong Answer

import re
for _ in range(int(input())):
    name, user_email = input().split(" ")
    if bool(re.search(r"^<[a-zA-Z\d_-]+@[a-zA-Z\d]*\.[a-zA-Z]{1,3}>$", user_email)):
        print(name, user_email)

