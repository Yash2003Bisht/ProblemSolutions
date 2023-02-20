# DATE: 02/12/2022, 07:11:15
# PROBLEM NAME: Alternating String
# PROBLEM URL: https://www.codechef.com/problems/ALTSTR
# PROBLEM DIFFICULTY RATTING: 1116
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.8M

import sys

for _ in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    s = sys.stdin.readline()
    count_1 = s.count('1')
    count_0 = s.count('0')

    if count_1 == count_0:
        print(n)
    else:
        print((min(count_1, count_0)*2)+1)


