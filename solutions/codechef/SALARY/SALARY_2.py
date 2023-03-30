# DATE: 29/03/2023, 08:57:54
# PROBLEM NAME: The Minimum Number Of Moves
# PROBLEM URL: https://www.codechef.com/problems/SALARY
# PROBLEM DIFFICULTY RATTING: 1286
# STATUS: time limit exceeded
# TIME: -
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    w = list(map(int, input().split()))
    count = 0

    while True:
        _max = max(w)
        flag = False

        for i in range(n):
            if w[i] < _max:
                flag = True
                w[i] += 1

        if flag:
            count += 1
            flag = False

        for i in range(n-1):
            if w[i] != w[i+1]:
                break
        else:
            break

    print(count)


