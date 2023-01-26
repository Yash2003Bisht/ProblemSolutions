# QUESTION URL: https://www.codechef.com/problems/MISSP
# STATUS: accepted
# TIME: 0.08
# MEMORY: 10.4M

from collections import Counter
for _ in range(int(input())):
    dolls = [int(input()) for _ in range(int(input()))]
    for doll_type, number in Counter(dolls).items():
        if number%2 != 0:
            print(doll_type)


