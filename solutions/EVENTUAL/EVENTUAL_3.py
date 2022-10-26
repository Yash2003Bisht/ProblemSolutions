# QUESTION URL: https://www.codechef.com/problems/EVENTUAL

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    lst = []
    for key, value in Counter(input()).items():
        if value % 2 == 0:
            lst.append(True)
        else:
            lst.append(False)
    print("YES" if all(lst) else "NO")


