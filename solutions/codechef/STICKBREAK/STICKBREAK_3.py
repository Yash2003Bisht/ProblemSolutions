# DATE: 12/12/2022, 06:08:00
# PROBLEM NAME: Stick Break
# PROBLEM URL: https://www.codechef.com/problems/STICKBREAK
# PROBLEM DIFFICULTY RATTING: 1123
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

import sys

for _ in range(int(sys.stdin.readline())):
    k, l = map(int, sys.stdin.readline().split())
    print("0" if k%l ==0 else "1")

