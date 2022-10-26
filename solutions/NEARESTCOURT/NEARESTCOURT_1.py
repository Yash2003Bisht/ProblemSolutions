# QUESTION URL: https://www.codechef.com/problems/NEARESTCOURT

import math

for _ in range(int(input())):
    x, y = map(int, input().split(" "))
    print(math.ceil((max(x,y)-min(x,y))/2))


