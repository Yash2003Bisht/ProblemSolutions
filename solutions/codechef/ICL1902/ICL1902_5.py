# DATE: 03/12/2022, 06:44:13
# PROBLEM NAME: FlatLand
# PROBLEM URL: https://www.codechef.com/problems/ICL1902
# PROBLEM DIFFICULTY RATTING: 1117
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    count = 0
    i = 0
    num = 2

    while count < n:
        i = num * num

        if n < i:
            num -= 1
            n -= num * num
            count += 1
            num = 2
        else:
            num += 1

    print(count + n)


