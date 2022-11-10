# QUESTION URL: https://www.codechef.com/problems/JOHNY
# STATUS: accepted
# TIME: 0.05
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    k = a[int(input())-1]
    a.sort()
    print(a.index(k)+1)

