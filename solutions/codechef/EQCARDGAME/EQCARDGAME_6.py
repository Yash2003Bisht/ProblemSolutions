# DATE: 31/10/2022, 06:17:25
# PROBLEM NAME: Equal Card Game
# PROBLEM URL: https://www.codechef.com/problems/EQCARDGAME
# PROBLEM DIFFICULTY RATTING: 1058
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.5M

import sys

for _ in range(int(sys.stdin.readline())):
    k = int(sys.stdin.readline())
    cards = 52
    sys.stdout.write(f'{cards-(cards//k)*k}\n')


