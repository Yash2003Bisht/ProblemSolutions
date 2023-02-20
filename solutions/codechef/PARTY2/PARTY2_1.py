# DATE: 30/07/2022, 06:23:12
# PROBLEM NAME: Chef gives Party
# PROBLEM URL: https://www.codechef.com/problems/PARTY2
# PROBLEM DIFFICULTY RATTING: 363
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.2M

for _ in range(int(input())):
    n, x, k = map(int, input().split(" "))
    print("YES" if n*x <= k else "NO")

