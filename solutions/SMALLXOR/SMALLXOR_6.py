# QUESTION URL: https://www.codechef.com/problems/SMALLXOR

from bisect import bisect

for _ in range(int(input())):
    n, x, y = map(int, input().split(" "))
    a = list(map(int, input().split(" ")))
    while y > 0:
        s = min(a)
        if (s ^ x) > s:
            index = bisect(a, s)
            a.pop(index-1)
            a.insert(index-1, s ^ x)
            y -= 1
        else:
            if (y & 1) == 0:
                break
            else:
                index = bisect(a, s)
                a.pop(index - 1)
                a.insert(index - 1, s ^ x)
                break
    a.sort()
    print(" ".join(list(map(str, a))))


