# DATE: 07/09/2022, 06:05:50
# PROBLEM NAME: String protocol
# PROBLEM URL: https://www.codechef.com/problems/STRP
# PROBLEM DIFFICULTY RATTING: 1065
# STATUS: wrong answer
# TIME: 0.00
# MEMORY: 0M

for _ in range(int(input())):
    n = int(input())
    s = input()
    count = 1
    i = 0
    while i < n - 1:
        if s[i] == s[i + 1]:
            i += 2
        else:
            i += 1
        count += 1

    print(count)


