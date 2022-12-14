# QUESTION URL: https://www.codechef.com/problems/XYSTR
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


