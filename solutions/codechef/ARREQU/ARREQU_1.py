# DATE: 22/03/2023, 07:31:19
# PROBLEM NAME: Array Equality
# PROBLEM URL: https://www.codechef.com/problems/ARREQU
# PROBLEM DIFFICULTY RATTING: 1281
# STATUS: accepted
# TIME: 0.11
# MEMORY: 27.6M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    counter_arr = Counter(map(int, input().split()))

    if max(counter_arr.values()) > round(n/2):
        print("No")
    else:
        print("Yes")


