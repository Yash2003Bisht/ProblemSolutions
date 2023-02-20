# DATE: 02/09/2022, 05:39:01
# PROBLEM NAME: Even-tual Reduction
# PROBLEM URL: https://www.codechef.com/problems/EVENTUAL
# PROBLEM DIFFICULTY RATTING: 1040
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    lst = []
    for key, value in Counter(input()).items():
        if value % 2 == 0:
            lst.append(True)
        else:
            lst.append(False)
    print("YES" if all(lst) else "NO")


