# DATE: 03/02/2024, 07:42:08
# PROBLEM NAME: Chef and Employment Test
# PROBLEM URL: https://www.codechef.com/problems/CK87MEDI
# PROBLEM DIFFICULTY RATTING: 1142
# STATUS: accepted
# TIME: 0.05
# MEMORY: 8.5M

from collections import Counter

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    max_mid = 0
    mid = ((n+k) // 2)

    for i in a:
        temp = a.copy()

        for _ in range(k):
            temp.append(i)

        temp.sort()
        max_mid = max(max_mid, temp[mid])

    print(max_mid)


