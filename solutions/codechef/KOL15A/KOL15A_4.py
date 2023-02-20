# DATE: 16/12/2022, 06:03:45
# PROBLEM NAME: Processing a string
# PROBLEM URL: https://www.codechef.com/problems/KOL15A
# PROBLEM DIFFICULTY RATTING: 1125
# STATUS: accepted
# TIME: 0.13
# MEMORY: 9.6M

for _ in range(int(input())):
    s = input()
    total = 0

    for i in s:
        if i.isdigit():
            total += int(i)

    print(total)


