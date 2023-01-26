# QUESTION URL: https://www.codechef.com/problems/TWOTRAINS
# STATUS: accepted
# TIME: 0.04
# MEMORY: 19.8M

for _ in range(int(input())):
    n = int(input())
    p = list(map(int, input().split(" ")))
    print(sum(p)+max(p))

