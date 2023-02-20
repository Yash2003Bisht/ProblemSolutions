# DATE: 17/08/2022, 06:22:06
# PROBLEM NAME: A Problem on Sticks
# PROBLEM URL: https://www.codechef.com/problems/TREE2
# PROBLEM DIFFICULTY RATTING: 1199
# STATUS: runtime error(NZEC)
# TIME: 0.00
# MEMORY: 0M

for _ in range(int(input())):
    n = int(input())
    a = list(set(map(int, input().split(" "))))
    try:
        a = a.remove(0)
    except ValueError:
        pass

    print(len(a))


