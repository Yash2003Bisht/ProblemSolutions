# DATE: 15/11/2022, 06:26:04
# PROBLEM NAME: String Game
# PROBLEM URL: https://www.codechef.com/problems/ABSTRING
# PROBLEM DIFFICULTY RATTING: 1102
# STATUS: accepted
# TIME: 0.04
# MEMORY: 9.7M

from collections import Counter
for _ in range(int(input())):
    n = int(input())
    s = Counter(input())
    
    if all(map(lambda x: x%2 == 0, s.values())):
        print("YES")
    else:
        print("NO")
    

