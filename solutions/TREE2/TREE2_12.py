# QUESTION URL: https://www.codechef.com/problems/TREE2

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split(" ")))
    operations = 0
    while sum(a) != 0:
        h = max(a)
        a = list(map(lambda x: x-h if x >= h else x, a))
        operations += 1
    print(operations)


