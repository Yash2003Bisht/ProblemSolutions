# DATE: 23/06/2023, 07:53:20
# PROBLEM NAME: Transfusion Chain
# PROBLEM URL: https://www.codechef.com/problems/TRANCHAIN
# PROBLEM DIFFICULTY RATTING: 1214
# STATUS: accepted
# TIME: 0.04
# MEMORY: 13.3M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    blood_groups = input().split()
    ab = blood_groups.count("AB")
    a = blood_groups.count("A") + ab
    b = blood_groups.count("B") + ab
    max_chain = max(a, b) + blood_groups.count("O")

    print(max_chain)


