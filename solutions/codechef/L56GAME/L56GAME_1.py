# DATE: 10/10/2022, 07:36:55
# PROBLEM NAME: Chef and Game with Sequence
# PROBLEM URL: https://www.codechef.com/problems/L56GAME
# PROBLEM DIFFICULTY RATTING: 1051
# STATUS: runtime error(NZEC)
# TIME: 0.00
# MEMORY: 0M

print("\n".join(["1" if int(input()) == 1 or sum(list(map(int, input().split()))) % 2 == 0 else "2" for _ in range(int(input()))]))

