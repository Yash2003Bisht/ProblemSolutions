# DATE: 22/08/2022, 05:45:11
# PROBLEM NAME: Chef and Dolls
# PROBLEM URL: https://www.codechef.com/problems/MISSP
# PROBLEM DIFFICULTY RATTING: 1012
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


