# DATE: 01/11/2022, 06:29:12
# PROBLEM NAME: Binary String Cost
# PROBLEM URL: https://www.codechef.com/problems/BSCOST
# PROBLEM DIFFICULTY RATTING: 1069
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

import sys
def get_ints(): return map(int, sys.stdin.readline().strip().split())
 
for _ in range(int(input())):
    n, x, y = get_ints()
    s = sys.stdin.readline()
    
    if s.count('01') == 0 and s.count('10') == 0:
        sys.stdout.write('0\n')
    elif x > y:
        sys.stdout.write(str(y)+'\n')
    else:
        sys.stdout.write(str(x)+'\n')
    
    

