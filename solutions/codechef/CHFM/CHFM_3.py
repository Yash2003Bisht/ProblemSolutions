# DATE: 19/01/2023, 08:27:16
# PROBLEM NAME: Chef and Mean  
# PROBLEM URL: https://www.codechef.com/problems/CHFM
# PROBLEM DIFFICULTY RATTING: 1229
# STATUS: accepted
# TIME: 0.18
# MEMORY: 26M

import math

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    num = sum(a) / n

    if int(num) in a and int(str(num).split(".")[1]) == 0:
        print(a.index(int(num)) + 1)
    else:
        print("Impossible")


