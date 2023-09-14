# DATE: 14/09/2023, 07:58:22
# PROBLEM NAME: Chef and Pick Digit
# PROBLEM URL: https://www.codechef.com/problems/CHEFPDIG
# PROBLEM DIFFICULTY RATTING: 1460
# STATUS: accepted
# TIME: 0.62
# MEMORY: 10.2M

for _ in range(int(input())):
    n = input()
    digits = []
    total = 0

    for d in n:
        digits.append(int(d))
        total += 1

    for i in range(65, 91):
        start, end = i//10, i%10
        count = 0 if start != end else 1

        if digits.count(start) > count and digits.count(end) > count:
            print(chr(i), end="")

    print()


