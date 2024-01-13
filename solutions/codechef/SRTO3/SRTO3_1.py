# DATE: 13/01/2024, 09:28:02
# PROBLEM NAME: ORST 
# PROBLEM URL: https://www.codechef.com/problems/SRTO3
# PROBLEM DIFFICULTY RATTING: 1278
# STATUS: accepted
# TIME: 0.25
# MEMORY: 38.5M

for _ in range(int(input())):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    max_b = max(b)
    sliced = n - max_b

    sliced_a = a[sliced: ]
    sliced_a.sort()
    combined = a[:sliced] + sliced_a

    print(*combined)


