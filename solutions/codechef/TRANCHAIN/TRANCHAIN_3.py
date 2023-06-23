# DATE: 23/06/2023, 07:52:41
# PROBLEM NAME: Transfusion Chain
# PROBLEM URL: https://www.codechef.com/problems/TRANCHAIN
# PROBLEM DIFFICULTY RATTING: 1214
# STATUS: accepted
# TIME: 0.04
# MEMORY: 13.4M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    bloods_group = input().split()
    ab = bloods_group.count("AB")
    a = bloods_group.count("A") + ab
    b = bloods_group.count("B") + ab
    max_chain = max(a, b) + bloods_group.count("O")

    print(max_chain)
    

