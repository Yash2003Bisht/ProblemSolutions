# DATE: 19/08/2022, 06:33:58
# PROBLEM NAME: Buy1-Get1
# PROBLEM URL: https://www.codechef.com/problems/BUY1GET1
# PROBLEM DIFFICULTY RATTING: 1191
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    j = list(input())
    counter = {}
    total = 0
    
    for i in j:
        if i not in counter:
            counter[i] = 0
        counter[i] += 1

    for i in counter:
        total += counter[i] // 2 + counter[i] % 2
    print(total)


