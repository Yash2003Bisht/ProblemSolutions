# QUESTION URL: https://www.codechef.com/problems/MISSP
# STATUS: accepted
# TIME: 0.09
# MEMORY: 10.2M

from collections import Counter
for _ in range(int(input())):
    dolls = []
    for _ in range(int(input())):
        dolls.append(int(input()))
    for doll_type, number in Counter(dolls).items():
        if number%2 != 0:
            print(doll_type)


