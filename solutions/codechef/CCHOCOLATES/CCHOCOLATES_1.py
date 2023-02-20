# DATE: 30/07/2022, 06:42:17
# PROBLEM NAME: Chef and Chocolates
# PROBLEM URL: https://www.codechef.com/problems/CCHOCOLATES
# PROBLEM DIFFICULTY RATTING: 405
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.2M

for _ in range(int(input())):
    n, x, z = map(int, input().split(" "))
    print((n*5 + x*10) // z)

