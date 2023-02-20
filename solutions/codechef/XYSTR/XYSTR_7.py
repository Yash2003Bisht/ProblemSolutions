# DATE: 14/12/2022, 06:20:01
# PROBLEM NAME: Chef and String
# PROBLEM URL: https://www.codechef.com/problems/XYSTR
# PROBLEM DIFFICULTY RATTING: 1124
# STATUS: accepted
# TIME: 0.08
# MEMORY: 9.8M

for _ in range(int(input())):
    s = input()
    i = 0
    count = 0

    while i < len(s) - 1:
        if s[i] != s[i + 1]:
            count += 1
            i += 2
        else:
            i += 1

    print(count)


