# QUESTION URL: https://www.codechef.com/problems/EVENTUAL
# STATUS: accepted

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    lst = [True if value%2==0 else False for key, value in Counter(input()).items()]
    print("YES" if all(lst) else "NO")


