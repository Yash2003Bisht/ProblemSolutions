# DATE: 20/02/2023, 08:15:10
# PROBLEM NAME: Pushpa 
# PROBLEM URL: https://www.codechef.com/problems/PUSH7PA
# PROBLEM DIFFICULTY RATTING: 1266
# STATUS: accepted
# TIME: 0.21
# MEMORY: 19.3M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    h = Counter(map(int, input().split()))
    max_value = 0

    for key in h:
        max_value = max(max_value, key+h[key]-1)

    print(max_value)


