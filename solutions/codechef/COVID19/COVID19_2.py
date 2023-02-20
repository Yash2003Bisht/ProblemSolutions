# DATE: 07/01/2023, 08:05:17
# PROBLEM NAME: Coronavirus Spread
# PROBLEM URL: https://www.codechef.com/problems/COVID19
# PROBLEM DIFFICULTY RATTING: 1219
# STATUS: accepted
# TIME: 0.04
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    x = list(map(int, input().split()))
    lst = []
    count = 1

    for i in range(n - 1):
        if x[i + 1] - x[i] > 2:
            lst.append(count)
            count = 1
        else:
            count += 1
    
    lst.append(count)

    print(min(lst), max(lst))


