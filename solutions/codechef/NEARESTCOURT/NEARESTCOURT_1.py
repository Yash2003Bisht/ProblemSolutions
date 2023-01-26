# QUESTION URL: https://www.codechef.com/problems/NEARESTCOURT
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.2M

import math

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    print(math.ceil((max(x,y)-min(x,y))/2))


