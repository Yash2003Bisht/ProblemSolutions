# QUESTION URL: https://www.codechef.com/problems/CHFPARTY
# STATUS: accepted
# TIME: 0.26
# MEMORY: 25.2M

import sys

for _ in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    a = list(map(int, sys.stdin.readline().split()))
    a.sort()
    total = 0

    for i in a:
        if total >= i:
            total += 1
        else:
            break

    sys.stdout.write(str(total) + "\n")


