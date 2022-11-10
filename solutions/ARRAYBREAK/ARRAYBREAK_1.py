# QUESTION URL: https://www.codechef.com/problems/ARRAYBREAK
# STATUS: accepted
# TIME: 0.07
# MEMORY: 20.4M

for _ in range(int(input())):
    n = int(input())
    a = len(list(filter(lambda x: x%2 == 0, map(int, input().split()))))
    print(0 if a == n else a)

