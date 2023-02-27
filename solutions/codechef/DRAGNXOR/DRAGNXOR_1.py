# DATE: 25/02/2023, 08:50:43
# PROBLEM NAME: Open the Dragon Scroll
# PROBLEM URL: https://www.codechef.com/problems/DRAGNXOR
# PROBLEM DIFFICULTY RATTING: 1257
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

from itertools import permutations

for _ in range(int(input())):
    n, a, b = map(int, input().split())
    a, b = bin(a).replace("0b", ""), bin(b).replace("0b", "")
    a, b = "0" * (n - len(a)) + a, "0" * (n - len(b)) + b  # add leading zeros
    a0, a1, b0, b1 = a.count("0"), a.count("1"), b.count("0"), b.count("1")

    s1 = min(a1, b0) + min(a0, b1)
    s0 = n - s1
    print(int("1" * s1 + "0" * s0, 2))


