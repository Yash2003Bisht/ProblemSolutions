# DATE: 10/10/2022, 07:34:06
# PROBLEM NAME: Chef and Game with Sequence
# PROBLEM URL: https://www.codechef.com/problems/L56GAME
# PROBLEM DIFFICULTY RATTING: 1051
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    print(1 if sum(a) % 2 == 0 or n == 1 else 2)

