# DATE: 25/01/2023, 08:36:17
# PROBLEM NAME: Mode of Frequencies
# PROBLEM URL: https://www.codechef.com/problems/MODEFREQ
# PROBLEM DIFFICULTY RATTING: 1234
# STATUS: accepted
# TIME: 0.13
# MEMORY: 9.9M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    b = Counter(Counter(map(int, input().split())).values())
    max_value = 0
    current_key = 0

    for key, value in b.items():
        if max_value < value:
            max_value = value
            current_key = key

        elif max_value == value:
            current_key = min(current_key, key)

    
    print(current_key)


