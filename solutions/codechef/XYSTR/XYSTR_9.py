# DATE: 14/12/2022, 06:08:16
# PROBLEM NAME: Chef and String
# PROBLEM URL: https://www.codechef.com/problems/XYSTR
# PROBLEM DIFFICULTY RATTING: 1124
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

import sys

for _ in range(int(sys.stdin.readline())):
    s = sys.stdin.readline()
    xy_count = s.count('xy')
    s = s.replace('xy', '')
    yx_count = s.count('yx')
    sys.stdout.write(str(xy_count + yx_count) + '\n')


