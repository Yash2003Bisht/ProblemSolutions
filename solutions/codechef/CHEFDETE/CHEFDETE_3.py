# QUESTION URL: https://www.codechef.com/problems/CHEFDETE
# STATUS: accepted
# TIME: 0.07
# MEMORY: 20.6M

n = int(input())
r = set(map(int, input().split()))

for i in range(1, n+1):
    if i not in r:
        print(i, end=" ")


