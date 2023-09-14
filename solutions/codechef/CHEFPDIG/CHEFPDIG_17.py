# DATE: 14/09/2023, 07:51:43
# PROBLEM NAME: Chef and Pick Digit
# PROBLEM URL: https://www.codechef.com/problems/CHEFPDIG
# PROBLEM DIFFICULTY RATTING: 1460
# STATUS: partially accepted
# TIME: 0.02
# MEMORY: 9.5M

for _ in range(int(input())):
    n = input()
    digits = []
    total = 0
    flag = False

    for d in n:
        if d not in digits:
            digits.append(int(d))
            total += 1

        if total == 10:
            break

    for i in range(65, 91):
        start, end = i//10, i%10
        count = 0 if start != end else 1

        if digits.count(start) > count and digits.count(end) > count:
            print(chr(i), end="")
            flag = True

    if flag:
        print()


