# QUESTION URL: https://www.codechef.com/problems/SMALLXOR
# STATUS: time limit exceeded

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



