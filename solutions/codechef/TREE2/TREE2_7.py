# QUESTION URL: https://www.codechef.com/problems/TREE2
# STATUS: runtime error(NZEC)
# TIME: 0.00
# MEMORY: 0M

for _ in range(int(input())):
    n = int(input())
    a = set(map(int, input().split(" ")))
    try:
        a = a.remove(0)
    except KeyError:
        pass
    print(len(a))


