# QUESTION URL: https://www.codechef.com/problems/XYSTR
# STATUS: accepted
# TIME: 0.08
# MEMORY: 9.7M

import sys

for _ in range(int(sys.stdin.readline())):
    s = sys.stdin.readline()
    i = 0
    count = 0

    while i < len(s) - 2:
        if s[i] != s[i + 1]:
            count += 1
            i += 2
        else:
            i += 1

    sys.stdout.write(str(count) + '\n')
    

