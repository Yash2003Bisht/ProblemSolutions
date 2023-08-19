# DATE: 19/08/2023, 08:00:10
# PROBLEM NAME: Take Not Less
# PROBLEM URL: https://www.codechef.com/problems/TAKENOTLESS
# PROBLEM DIFFICULTY RATTING: 1432
# STATUS: accepted
# TIME: 0.16
# MEMORY: 21.5M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = Counter(map(int, input().split()))
    winner = 0

    for value in a.values():
        if value%2 == 1:
            winner = 1
            break

    if winner:
        print("Marichka")
    else:
        print("Zenyk")


