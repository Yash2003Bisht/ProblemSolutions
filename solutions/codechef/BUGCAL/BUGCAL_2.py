# DATE: 03/06/2023, 08:01:11
# PROBLEM NAME: Buggy Calculator
# PROBLEM URL: https://www.codechef.com/problems/BUGCAL
# PROBLEM DIFFICULTY RATTING: 1363
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

for _ in range(int(input())):
    a, b = map(int, input().split())
    ans, c = 0, 1

    while a > 0 or b > 0:
        ans += ((a + b)%10) * c
        a //= 10;
        b //= 10;
        c *= 10;

    print(ans)


