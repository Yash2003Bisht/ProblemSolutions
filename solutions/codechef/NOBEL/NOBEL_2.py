# DATE: 21/06/2023, 08:09:25
# PROBLEM NAME: Nobel Prize
# PROBLEM URL: https://www.codechef.com/problems/NOBEL
# PROBLEM DIFFICULTY RATTING: 1372
# STATUS: accepted
# TIME: 0.72
# MEMORY: 40.6M

from collections import Counter

for _ in range(int(input())):
    n, m = map(int, input().split())
    counter = Counter(map(int, input().split()))

    if not len(set(range(1, m+1)).difference(counter.keys())):
        print("No")
    else:
        print("Yes")


