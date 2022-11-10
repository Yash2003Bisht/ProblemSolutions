# QUESTION URL: https://www.codechef.com/problems/REMOVEBAD
# STATUS: accepted
# TIME: 0.09
# MEMORY: 20.2M

from collections import Counter

for _ in range(int(input())):
    input()
    print(sum(sorted(Counter(map(int, input().split())).values(), reverse=True)[1:]))


