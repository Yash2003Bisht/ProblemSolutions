# DATE: 22/08/2022, 05:49:22
# PROBLEM NAME: Chef and Dolls
# PROBLEM URL: https://www.codechef.com/problems/MISSP
# PROBLEM DIFFICULTY RATTING: 1012
# STATUS: accepted
# TIME: 0.08
# MEMORY: 10.4M

from collections import Counter
for _ in range(int(input())):
    dolls = [int(input()) for _ in range(int(input()))]
    for doll_type, number in Counter(dolls).items():
        if number%2 != 0:
            print(doll_type)


