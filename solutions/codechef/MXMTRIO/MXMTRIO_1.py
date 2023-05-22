# DATE: 22/05/2023, 08:42:10
# PROBLEM NAME: Maximum Trio
# PROBLEM URL: https://www.codechef.com/problems/MXMTRIO
# PROBLEM DIFFICULTY RATTING: 1349
# STATUS: accepted
# TIME: 0.14
# MEMORY: 41.8M

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()

    print((arr[n-1] - arr[0]) * arr[n-2])


