# QUESTION URL: https://www.codechef.com/problems/MISSP
# STATUS: accepted

from collections import Counter
for _ in range(int(input())):
    dolls = []
    for _ in range(int(input())):
        dolls.append(int(input()))
    for doll_type, number in Counter(dolls).items():
        if number%2 != 0:
            print(doll_type)


