# DATE: 10/08/2022, 09:42:27
# PROBLEM NAME: Split N
# PROBLEM URL: https://www.codechef.com/problems/SPLITN
# PROBLEM DIFFICULTY RATTING: 1195
# STATUS: time limit exceeded
# TIME: -
# MEMORY: 9.8M

import math

for _ in range(int(input())):
    n = int(input())
    count = 1
    if math.ceil(math.log10(n) / math.log10(2)) == math.floor(math.log10(n) / math.log10(2)):
        print(0)
    else:
        for i in range(1, (n+1)//2):
            if ((i & (i-1) == 0) and i != 0) and (n-i & (n-i-1) == 0) and n-i != 0:
                print(count)
                break
            else:
                count += 1


