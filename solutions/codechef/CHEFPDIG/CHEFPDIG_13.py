# DATE: 14/09/2023, 08:12:57
# PROBLEM NAME: Chef and Pick Digit
# PROBLEM URL: https://www.codechef.com/problems/CHEFPDIG
# PROBLEM DIFFICULTY RATTING: 1460
# STATUS: accepted
# TIME: 0.14
# MEMORY: 10.6M

from collections import Counter

for _ in range(int(input())):
    n = input()
    digits = Counter(n)

    for i in range(65, 91):
        start, end = i//10, i%10
        count = 0 if start != end else 1

        if digits.get(str(start), 0) > count and digits.get(str(end), 0) > count:
            print(chr(i), end="")

    print()


