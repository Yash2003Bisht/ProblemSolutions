# QUESTION URL: https://www.codechef.com/problems/ELEVSTRS
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

import math
for _ in range(int(input())):
    details = list(map(int, input().split()))
    
    if (details[0]*math.sqrt(2))/details[1] > (details[0]*2)/details[2]:
        print("Elevator")
    else:
        print("Stairs")

