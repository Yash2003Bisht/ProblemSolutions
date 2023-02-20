# DATE: 20/10/2022, 06:50:26
# PROBLEM NAME: Change It
# PROBLEM URL: https://www.codechef.com/problems/CHNGIT
# PROBLEM DIFFICULTY RATTING: 1061
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    lst = list(map(int, input().split()))
    most_common = Counter(lst).most_common()[0][0]
    counter = 0

    for i in range(n):
        if lst[i] != most_common:
            counter += 1

    print(counter)

