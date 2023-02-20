# DATE: 12/09/2022, 05:42:06
# PROBLEM NAME: Lazy Salesman
# PROBLEM URL: https://www.codechef.com/problems/HOLIDAYS
# PROBLEM DIFFICULTY RATTING: 1161
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.8M

for _ in range(int(input())):
    n, w = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort(reverse=True)
    total = 0
    work = 0
    for i in a:
        if total >= w:
            break
        else:
            total += i
            work += 1
    
    print(n-work)

