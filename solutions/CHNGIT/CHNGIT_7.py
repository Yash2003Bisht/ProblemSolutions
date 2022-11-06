# QUESTION URL: https://www.codechef.com/problems/CHNGIT
# STATUS: wrong answer

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


