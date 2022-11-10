# QUESTION URL: https://www.codechef.com/problems/EQCARDGAME
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.5M

import sys

for _ in range(int(sys.stdin.readline())):
    k = int(sys.stdin.readline())
    cards = 52
    sys.stdout.write(f'{cards-(cards//k)*k}\n')


