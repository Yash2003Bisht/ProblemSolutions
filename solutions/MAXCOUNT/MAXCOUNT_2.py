# QUESTION URL: https://www.codechef.com/problems/MAXCOUNT

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = Counter(map(int, input().split()))
    number = 0
    count = 0
    for key, value in a.items():
        if value > 1 and value >= count:
            count = value
            number = key if number > key or number == 0 else number

    print(number, count)


