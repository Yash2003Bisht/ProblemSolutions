# QUESTION URL: https://www.codechef.com/problems/L56GAME
# STATUS: runtime error(NZEC)
# TIME: 0.00
# MEMORY: 0M

print("\n".join(["1" if int(input()) == 1 or sum(list(map(int, input().split()))) % 2 == 0 else "2" for _ in range(int(input()))]))

