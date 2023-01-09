# QUESTION URL: https://www.codechef.com/problems/COVID19
# STATUS: wrong answer
# TIME: 0.00
# MEMORY: 0M

for _ in range(int(input())):
    n = int(input())
    x = list(map(int, input().split()))
    lst = []
    last = 0

    for i in range(n - 1):
        if x[i + 1] - x[i] > 2:
            lst.append(x[last: i + 1])
            last = i + 1

    lst.append(x[last:])

    print(len(min(lst)), len(max(lst)))


