# QUESTION URL: https://www.codechef.com/problems/SPLITN
# STATUS: time limit exceeded

import math

for _ in range(int(input())):
    n = int(input())
    count = 1
    if math.ceil(math.log10(n) / math.log10(2)) == math.floor(math.log10(n) / math.log10(2)):
        print(0)
    else:
        for i in range(1, max(int(math.sqrt(n)), 2)):
            if math.ceil(math.log10(i) / math.log10(2)) == math.floor(math.log10(i) / math.log10(2)) and math.ceil(math.log10(n-1) / math.log10(2)) == math.floor(math.log10(n-1) / math.log10(2)):
                print(count)
            else:
                count += 1


