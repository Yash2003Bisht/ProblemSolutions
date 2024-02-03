# DATE: 03/02/2024, 07:43:12
# PROBLEM NAME: Chef and Employment Test
# PROBLEM URL: https://www.codechef.com/problems/CK87MEDI
# PROBLEM DIFFICULTY RATTING: 1142
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 8.4M

from collections import Counter

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    mid = ((n+k) // 2)
    max_mid = a[mid]
    print(max_mid)


