# DATE: 01/08/2023, 07:37:35
# PROBLEM NAME: Remove Element
# PROBLEM URL: https://www.codechef.com/problems/REMELEM
# PROBLEM DIFFICULTY RATTING: 1415
# STATUS: accepted
# TIME: 0.06
# MEMORY: 22.5M

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()

    if (a[0] + a[n-1]) <= k or n == 1:
        print("YES")
    else:
        print("NO")


