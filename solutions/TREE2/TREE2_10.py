# QUESTION URL: https://www.codechef.com/problems/TREE2
# STATUS: partially accepted
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    a = set(map(int, input().split(" ")))
    operations = 0
    while sum(a) != 0:
        h = max(a)
        a = set(map(lambda x: x-h if x >= h else x, a))
        operations += 1
    print(operations)


