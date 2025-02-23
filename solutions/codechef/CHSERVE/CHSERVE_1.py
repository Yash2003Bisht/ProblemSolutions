# DATE: 21/11/2022, 07:01:21
# PROBLEM NAME: Chef and Serves
# PROBLEM URL: https://www.codechef.com/problems/CHSERVE
# PROBLEM DIFFICULTY RATTING: 1101
# STATUS: accepted
# TIME: 0.12
# MEMORY: 9.4M

import sys

for _ in range(int(sys.stdin.readline())):
    p1, p2, k = map(int, sys.stdin.readline().split())
    crr_serve_number = (p1+p2) // k
    
    if crr_serve_number % 2 == 0:
        sys.stdout.write("CHEF\n")
    else:
        sys.stdout.write("COOK\n")

