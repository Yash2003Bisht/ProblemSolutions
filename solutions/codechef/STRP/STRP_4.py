# DATE: 07/09/2022, 06:17:51
# PROBLEM NAME: String protocol
# PROBLEM URL: https://www.codechef.com/problems/STRP
# PROBLEM DIFFICULTY RATTING: 1065
# STATUS: accepted
# TIME: 0.04
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    s = input()
    i = 1
    while i < len(s):
        if s[i] == s[i - 1]:
            i += 2
            n -= 1
        else:
            i += 1

    print(n)


