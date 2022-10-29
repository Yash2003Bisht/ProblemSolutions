# QUESTION URL: https://www.codechef.com/problems/MAXDIFFMIN

import sys
def get_ints(): return map(int, sys.stdin.readline().strip().split())
 
for _ in range(int(input())):
    lst = list(get_ints())
    sys.stdout.write(str(max(lst) - min(lst)) + '\n')

