# QUESTION URL: https://www.codechef.com/problems/SPLITN
# STATUS: time limit exceeded

import math

for _ in range(int(input())):
    n = int(input())
    count = 1
    if math.ceil(math.log10(n) / math.log10(2)) == math.floor(math.log10(n) / math.log10(2)):
        print(0)
    else:
        for i in range(1, (n//2)+1):
            if ((i & (i-1) == 0) and i != 0) and (n-i & (n-i-1) == 0) and n-i != 0:
                print(count)
                break
            else:
                count += 1


