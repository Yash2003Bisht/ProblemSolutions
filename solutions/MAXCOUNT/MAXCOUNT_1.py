# QUESTION URL: https://www.codechef.com/problems/MAXCOUNT
# STATUS: accepted

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = Counter(map(int, input().split()))
    number = 0
    count = 0
    for value in sorted(a.items()):
        if value[1] > count:
            count = value[1]
            number = value[0]

    print(number, count)


