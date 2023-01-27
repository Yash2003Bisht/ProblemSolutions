# QUESTION URL: https://www.hackerrank.com/challenges/30-regex-patterns/problem
# STATUS: Accepted

import re

N = int(input().strip())
names = []
for N_itr in range(N):
    first_multiple_input = input().rstrip().split()

    firstName = first_multiple_input[0]

    emailID = first_multiple_input[1]
    nameWithEmail = f"{firstName} {emailID}"

    f = re.findall(r"@gmail.com", nameWithEmail)
    if len(f) > 0:
        names.append([firstName, f])
names.sort()
for i in names:
    print(i[0])
    

