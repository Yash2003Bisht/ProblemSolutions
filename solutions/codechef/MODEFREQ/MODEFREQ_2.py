# QUESTION URL: https://www.codechef.com/problems/MODEFREQ
# STATUS: accepted
# TIME: 0.12
# MEMORY: 9.8M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = Counter(map(int, input().split()))
    b = Counter(a.values())
    max_value = 0
    current_key = 0

    for key, value in b.items():
        if max_value < value:
            max_value = value
            current_key = key

        elif max_value == value:
            current_key = min(current_key, key)

    
    print(current_key)

