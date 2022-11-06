# QUESTION URL: https://www.codechef.com/problems/DOMINANT2
# STATUS: accepted

from collections import Counter

for _ in range(int(input())):
    n = int(input())  # not required in python
    a = Counter(list(map(int, input().split(" "))))
    count = 0
    equal = False
    if sum(a.values()) == len(a):
        print('NO')
    else:
        for i, j in a.items():
            if j > count:
                equal = False
                count = j
            elif j == count:
                equal = True
                count = j
        print("YES" if not equal else "NO")


