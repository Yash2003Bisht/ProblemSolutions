# QUESTION URL: https://www.codechef.com/problems/XYSTR
# STATUS: wrong answer
# TIME: 0.00
# MEMORY: 0M

import sys

for _ in range(int(sys.stdin.readline())):
    s = sys.stdin.readline()
    i = 0
    count = 0

    while i < len(s) - 1:
        if s[i] != s[i + 1]:
            count += 1
            i += 2
        else:
            i += 1

    print(count)

