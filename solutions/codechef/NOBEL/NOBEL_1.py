# DATE: 21/06/2023, 08:10:40
# PROBLEM NAME: Nobel Prize
# PROBLEM URL: https://www.codechef.com/problems/NOBEL
# PROBLEM DIFFICULTY RATTING: 1372
# STATUS: accepted
# TIME: 0.47
# MEMORY: 27.2M

for _ in range(int(input())):
    n, m = map(int, input().split())
    total = len(set(map(int, input().split())))

    if total == m:
        print("No")
    else:
        print("Yes")


