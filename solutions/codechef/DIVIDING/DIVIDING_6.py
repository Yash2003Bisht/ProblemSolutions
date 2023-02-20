# DATE: 28/11/2022, 05:58:56
# PROBLEM NAME: Dividing Stamps
# PROBLEM URL: https://www.codechef.com/problems/DIVIDING
# PROBLEM DIFFICULTY RATTING: 1109
# STATUS: accepted
# TIME: 0.03
# MEMORY: 15.5M

import sys

n = int(sys.stdin.readline())
total_stamps = sum(map(int, sys.stdin.readline().split()))

if n*((n+1)/2) == total_stamps:
    sys.stdout.write("YES\n")
else:
    sys.stdout.write("NO\n")

