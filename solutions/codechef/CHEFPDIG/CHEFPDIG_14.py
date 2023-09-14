# DATE: 14/09/2023, 08:02:39
# PROBLEM NAME: Chef and Pick Digit
# PROBLEM URL: https://www.codechef.com/problems/CHEFPDIG
# PROBLEM DIFFICULTY RATTING: 1460
# STATUS: partially accepted
# TIME: 0.03
# MEMORY: 9.9M

for _ in range(int(input())):
    n = input()
    digits = []
    total = 0

    for d in n:
        if d not in digits or (d in [6, 7, 8] and digits.count(d) == 1):
            digits.append(int(d))
            total += 1

        if total == 13:
            break

    for i in range(65, 91):
        start, end = i//10, i%10
        count = 0 if start != end else 1

        if digits.count(start) > count and digits.count(end) > count:
            print(chr(i), end="")

    print()


