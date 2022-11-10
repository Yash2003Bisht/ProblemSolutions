# QUESTION URL: https://www.codechef.com/problems/VALIDMIN
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.3M

for _ in range(int(input())):
    lst = list(map(int, input().split(" ")))
    lst.sort()
    if lst[0] == lst[1]:
        print('YES')
    else:
        print('NO')

