# QUESTION URL: https://www.codechef.com/problems/TREE2
# STATUS: accepted
# TIME: 0.41
# MEMORY: 30M

for _ in range(int(input())):
    n = int(input())
    a = set(map(int, input().split()))
    if 0 in a:
        a.remove(0)
    print(len(a))



