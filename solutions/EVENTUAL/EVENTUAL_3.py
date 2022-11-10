# QUESTION URL: https://www.codechef.com/problems/EVENTUAL
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

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


