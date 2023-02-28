# DATE: 28/02/2023, 07:45:26
# PROBLEM NAME: Distinct Binary Strings
# PROBLEM URL: https://www.codechef.com/problems/BINSTRING
# PROBLEM DIFFICULTY RATTING: 1262
# STATUS: accepted
# TIME: 0.06
# MEMORY: 11.2M

for _ in range(int(input())):
    n = int(input())
    s = list(input())
    sep_1 = 0
    sep_0 = 0

    for i in range(n-1):
        if s[i] != s[i+1]:
            if s[i] == '1':
                sep_1 += 1
            else:
                sep_0 += 1

    print(sep_0 + sep_1 + 1)


