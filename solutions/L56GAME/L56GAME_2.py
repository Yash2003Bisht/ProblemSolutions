# QUESTION URL: https://www.codechef.com/problems/L56GAME
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    print(1 if sum(a) % 2 == 0 or n == 1 else 2)

