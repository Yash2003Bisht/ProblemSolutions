# DATE: 13/08/2022, 06:21:57
# PROBLEM NAME: XOR with smallest element
# PROBLEM URL: https://www.codechef.com/problems/SMALLXOR
# PROBLEM DIFFICULTY RATTING: 1635
# STATUS: time limit exceeded
# TIME: -
# MEMORY: 9.7M

from bisect import bisect
for _ in range(int(input())):
    n, x, y = map(int, input().split(" "))
    a = list(map(int, input().split(" ")))
    for _ in range(y):
        s = min(a)
        index = bisect(a, s)
        value = a.pop(index-1)
        a.insert(index-1, value^x)
    a.sort()
    print(" ".join(list(map(str, a))))



