# DATE: 01/08/2022, 07:37:09
# PROBLEM NAME: Kitchen Timetable
# PROBLEM URL: https://www.codechef.com/problems/KTTABLE
# PROBLEM DIFFICULTY RATTING: 997
# STATUS: accepted
# TIME: 0.08
# MEMORY: 12M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split(" ")))
    b = list(map(int, input().split(" ")))
    time_unit = []
    for i in range(len(a)):
        if i == 0:
            time_unit.append(a[i])
        else:
            time_unit.append(a[i] - a[i-1])

    count = [1 for i in range(len(b)) if b[i] <= time_unit[i]]

    print(sum(count))



