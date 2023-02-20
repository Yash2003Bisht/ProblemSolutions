# DATE: 01/08/2022, 08:09:12
# PROBLEM NAME: Keplers Law
# PROBLEM URL: https://www.codechef.com/problems/KEPLERSLAW
# PROBLEM DIFFICULTY RATTING: 992
# STATUS: accepted
# TIME: 0.09
# MEMORY: 9.2M

for _ in range(int(input())):
    s = list(map(int, input().split(" ")))
    print('Yes' if s[0]**2/s[2]**3 == s[1]**2/s[3]**3 else 'No')

