# DATE: 10/02/2023, 07:20:03
# PROBLEM NAME: Split the Str Ing
# PROBLEM URL: https://www.codechef.com/problems/SPLITIT
# PROBLEM DIFFICULTY RATTING: 1251
# STATUS: accepted
# TIME: 0.07
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    s = input()
    if s[n-1] in s[:n-1]:
        print("YES")
    else:
        print("NO")


