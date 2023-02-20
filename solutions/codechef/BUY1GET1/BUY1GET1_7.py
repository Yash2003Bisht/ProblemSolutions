# DATE: 19/08/2022, 06:32:49
# PROBLEM NAME: Buy1-Get1
# PROBLEM URL: https://www.codechef.com/problems/BUY1GET1
# PROBLEM DIFFICULTY RATTING: 1191
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

for _ in range(int(input())):
    j = list(input().strip())
    counter = {}
    total = 0
    
    for i in j:
        if i not in counter:
            counter[i] = 0
        counter[i] += 1

    for i in counter:
        total += counter[i] // 2 + counter[i] % 2
    print(total)


