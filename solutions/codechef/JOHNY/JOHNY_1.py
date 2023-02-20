# DATE: 11/09/2022, 01:23:57
# PROBLEM NAME: Uncle Johny
# PROBLEM URL: https://www.codechef.com/problems/JOHNY
# PROBLEM DIFFICULTY RATTING: 1093
# STATUS: accepted
# TIME: 0.05
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    k = a[int(input())-1]
    a.sort()
    print(a.index(k)+1)

