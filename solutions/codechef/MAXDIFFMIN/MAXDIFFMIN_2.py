# DATE: 29/10/2022, 05:07:35
# PROBLEM NAME: Max minus Min
# PROBLEM URL: https://www.codechef.com/problems/MAXDIFFMIN
# PROBLEM DIFFICULTY RATTING: 339
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

import sys
def get_ints(): return map(int, sys.stdin.readline().strip().split())
 
for _ in range(int(input())):
    lst = list(get_ints())
    sys.stdout.write(str(max(lst) - min(lst)) + '\n')

