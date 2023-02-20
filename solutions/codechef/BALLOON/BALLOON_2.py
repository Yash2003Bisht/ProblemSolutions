# DATE: 27/12/2022, 06:29:57
# PROBLEM NAME: ICPC Balloons
# PROBLEM URL: https://www.codechef.com/problems/BALLOON
# PROBLEM DIFFICULTY RATTING: 1205
# STATUS: accepted
# TIME: 0.09
# MEMORY: 9.5M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))

    for i, x in enumerate(a[::-1]):
        if x <= 7:
            print(n-i)
            break


