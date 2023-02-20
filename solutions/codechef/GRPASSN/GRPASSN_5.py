# DATE: 11/11/2022, 06:28:11
# PROBLEM NAME: Group Assignment
# PROBLEM URL: https://www.codechef.com/problems/GRPASSN
# PROBLEM DIFFICULTY RATTING: 1092
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.5M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    p = Counter(map(int, input().split()))

    for group_size, people in p.items():
        if group_size % people != 0:
            print("NO")
            break
    
    else:
        print("YES")

