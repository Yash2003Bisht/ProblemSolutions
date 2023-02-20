# DATE: 08/01/2023, 06:00:14
# PROBLEM NAME: Sum it
# PROBLEM URL: https://www.codechef.com/problems/SUMM
# PROBLEM DIFFICULTY RATTING: 308
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.5M

for _ in range(int(input())):
    a, b, c = map(int, input().split())

    if a + b == c:
        print("YES")
    else:
        print("NO")


