# QUESTION URL: https://www.codechef.com/problems/SIGNMOVE
# STATUS: accepted
# TIME: 0.48
# MEMORY: 9.7M

import math

for _ in range(int(input())):
    n = int(input())

    if n%2 == 0:
        print(math.ceil(n/2))
    else:
        print(-math.ceil(n/2))

