# QUESTION URL: https://www.codechef.com/problems/EVENTUAL
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    s = Counter(input())
    lst = list(filter(lambda x: x[1] % 2 == 0, s.items()))
    print("YES" if len(lst) == len(s) else "NO")


