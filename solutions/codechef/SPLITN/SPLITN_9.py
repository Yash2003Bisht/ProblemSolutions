# DATE: 10/08/2022, 09:41:39
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
        for i in range(1, max(int(math.sqrt(n)), 2)):
            if math.ceil(math.log10(i) / math.log10(2)) == math.floor(math.log10(i) / math.log10(2)) and math.ceil(math.log10(n-1) / math.log10(2)) == math.floor(math.log10(n-1) / math.log10(2)):
                print(count)
                break
            else:
                count += 1


