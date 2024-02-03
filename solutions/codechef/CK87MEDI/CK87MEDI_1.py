# DATE: 03/02/2024, 07:43:37
# PROBLEM NAME: Chef and Employment Test
# PROBLEM URL: https://www.codechef.com/problems/CK87MEDI
# PROBLEM DIFFICULTY RATTING: 1142
# STATUS: accepted
# TIME: 0.02
# MEMORY: 8.4M

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()

    mid = ((n+k) // 2)
    max_mid = a[mid]

    print(max_mid)


