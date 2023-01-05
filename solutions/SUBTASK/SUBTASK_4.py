# QUESTION URL: https://www.codechef.com/problems/SUBTASK
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

for _ in range(int(input())):
    n, m, k = map(int, input().split())
    a = list(map(int, input().split()))

    if sum(a) == n:
        print(100)
    elif sum(a[:m]) == m:
        print(k)
    else:
        print(0)


