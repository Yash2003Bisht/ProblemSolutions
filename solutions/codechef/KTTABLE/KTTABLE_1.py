# DATE: 01/08/2022, 07:46:28
# PROBLEM NAME: Kitchen Timetable
# PROBLEM URL: https://www.codechef.com/problems/KTTABLE
# PROBLEM DIFFICULTY RATTING: 997
# STATUS: accepted
# TIME: 0.07
# MEMORY: 11.4M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split(" ")))
    b = list(map(int, input().split(" ")))
    count = 0
    for i in range(len(a)):
        if i == 0:
            count = 1 if b[i] <= a[i] else 0
        else:
            count += 1 if b[i] <= a[i] - a[i - 1] else 0

    print(count)



