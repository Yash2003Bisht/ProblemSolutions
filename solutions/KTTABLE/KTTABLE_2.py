# QUESTION URL: https://www.codechef.com/problems/KTTABLE

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



