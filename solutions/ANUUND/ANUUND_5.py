# QUESTION URL: https://www.codechef.com/problems/ANUUND
# STATUS: runtime error(NZEC)
# TIME: 0.07
# MEMORY: 23.2M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split(' ')))
    for i in range(n-1):
        if (a[i] > a[i+1] and i%2 == 0) or (a[i] < a[i+1] and i%2 != 0):
            element = a.pop(i+1)
            a.insert(i, element)

    print(' '.join(map(str, a)))

