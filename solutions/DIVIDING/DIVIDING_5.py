# QUESTION URL: https://www.codechef.com/problems/DIVIDING
# STATUS: accepted
# TIME: 0.03
# MEMORY: 15.5M

import sys

n = int(sys.stdin.readline())
total_stamps = sum(map(int, sys.stdin.readline().split()))

if n*((n+1)/2) == total_stamps:
    sys.stdout.write("YES")
else:
    sys.stdout.write("NO")

