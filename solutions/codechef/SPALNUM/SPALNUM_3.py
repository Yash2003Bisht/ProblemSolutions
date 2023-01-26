# QUESTION URL: https://www.codechef.com/problems/SPALNUM
# STATUS: accepted
# TIME: 3.46
# MEMORY: 9.5M

import sys

for _ in range(int(sys.stdin.readline())):
    a, b = map(int, sys.stdin.readline().split())

    sys.stdout.write(str(sum(filter(lambda x: str(x) == str(x)[::-1],
                                    range(a, b + 1)))) + "\n")


