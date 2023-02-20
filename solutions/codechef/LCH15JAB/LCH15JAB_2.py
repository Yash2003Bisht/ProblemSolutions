# DATE: 17/09/2022, 07:47:47
# PROBLEM NAME: Piece of cake
# PROBLEM URL: https://www.codechef.com/problems/LCH15JAB
# PROBLEM DIFFICULTY RATTING: 1144
# STATUS: accepted
# TIME: 0.11
# MEMORY: 73.6M

from collections import Counter

for _ in range(int(input())):
    s = Counter(input())
    max_value = max(s.values())
    value_sum = list(s.values())
    value_sum.remove(max_value)
    
    if sum(value_sum) == max_value:
        print("YES")
    else:
        print("NO")


