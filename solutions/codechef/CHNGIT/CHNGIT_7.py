# DATE: 20/10/2022, 06:35:55
# PROBLEM NAME: Change It
# PROBLEM URL: https://www.codechef.com/problems/CHNGIT
# PROBLEM DIFFICULTY RATTING: 1061
# STATUS: wrong answer
# TIME: 0.03
# MEMORY: 9.7M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    counter_dict = Counter(map(int, input().split()))
    counter = 0

    for value in counter_dict.values():
        if value == 1:
            counter += 1

    if counter == n:
        print(n - 1)
    else:
        print(counter)


