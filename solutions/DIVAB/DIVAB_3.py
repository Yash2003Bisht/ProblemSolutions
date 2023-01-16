# QUESTION URL: https://www.codechef.com/problems/DIVAB
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

import math

for _ in range(int(input())):
    a, b, n = map(int, input().split())

    if a%b == 0:
        print(-1)
    else:
        num = a*math.ceil(n/a)
        if num%b != 0:
            print(num)
        else:
            print(num+a)


