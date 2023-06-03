# DATE: 03/06/2023, 08:00:59
# PROBLEM NAME: Buggy Calculator
# PROBLEM URL: https://www.codechef.com/problems/BUGCAL
# PROBLEM DIFFICULTY RATTING: 1363
# STATUS: partially accepted
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    a, b = map(int, input().split())
    ans = []

    while a > 0 or b > 0:
        ans.append(str((a + b)%10))
        a //= 10;
        b //= 10;

    print("".join(ans[::-1]))


