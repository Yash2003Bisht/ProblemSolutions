# QUESTION URL: https://www.codechef.com/problems/SMALLXOR
# STATUS: wrong answer

from bisect import bisect

for _ in range(int(input())):
    n, x, y = map(int, input().split(" "))
    a = list(map(int, input().split(" ")))
    for _ in range(y):
        s = min(a)
        if s ^ x > s:
            index = bisect(a, s)
            value = a.pop(index - 1)
            a.insert(index - 1, value ^ x)
        else:
            index = bisect(a, s)
            value = a.pop(index - 1)
            a.insert(index - 1, value ^ x)
            break
    a.sort()
    print(" ".join(list(map(str, a))))


