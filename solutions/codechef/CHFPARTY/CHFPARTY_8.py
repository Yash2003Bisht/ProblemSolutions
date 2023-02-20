# DATE: 14/01/2023, 07:14:16
# PROBLEM NAME: Chef and Party
# PROBLEM URL: https://www.codechef.com/problems/CHFPARTY
# PROBLEM DIFFICULTY RATTING: 1223
# STATUS: accepted
# TIME: 0.28
# MEMORY: 24.8M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    total = 0

    for i in a:
        if i == 0 or total - i >= 0:
            total += 1
        else:
            break

    print(total)


