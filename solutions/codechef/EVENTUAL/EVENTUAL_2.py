# DATE: 02/09/2022, 05:42:39
# PROBLEM NAME: Even-tual Reduction
# PROBLEM URL: https://www.codechef.com/problems/EVENTUAL
# PROBLEM DIFFICULTY RATTING: 1040
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    lst = [True if value%2==0 else False for key, value in Counter(input()).items()]
    print("YES" if all(lst) else "NO")


