# DATE: 13/08/2022, 09:52:36
# PROBLEM NAME: Hello Equation
# PROBLEM URL: https://www.codechef.com/problems/HLEQN
# PROBLEM DIFFICULTY RATTING: 1315
# STATUS: accepted
# TIME: 0.22
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    x = 0
    for i in range(1, (int(n ** 0.5))):
        if (n - 2 * i) % (i + 2) == 0 and (n != 2 * i):
            x = x + 1
            break

    if x == 0:
        print('NO')
    else:
        print('YES')


