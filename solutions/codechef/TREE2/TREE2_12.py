# DATE: 17/08/2022, 06:05:41
# PROBLEM NAME: A Problem on Sticks
# PROBLEM URL: https://www.codechef.com/problems/TREE2
# PROBLEM DIFFICULTY RATTING: 1199
# STATUS: partially accepted
# TIME: 0.02
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split(" ")))
    operations = 0
    while sum(a) != 0:
        h = max(a)
        a = list(map(lambda x: x-h if x >= h else x, a))
        operations += 1
    print(operations)


