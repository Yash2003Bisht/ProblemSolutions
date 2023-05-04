# DATE: 04/05/2023, 07:52:10
# PROBLEM NAME: Chef and Cube
# PROBLEM URL: https://www.codechef.com/problems/CHCUBE
# PROBLEM DIFFICULTY RATTING: 1320
# STATUS: accepted
# TIME: 0.10
# MEMORY: 9.5M

import sys

for _ in range(int(sys.stdin.readline())):
    colors = sys.stdin.readline().split()
    set_1 = set(colors[:2])
    set_2 = set(colors[2:4])
    set_3 = set(colors[4:])

    if set_1.intersection(set_2).intersection(set_3):
        sys.stdout.write("YES\n")
    else:
        sys.stdout.write("NO\n")


