# QUESTION URL: https://www.codechef.com/problems/GRPASSN
# STATUS: accepted
# TIME: 0.04
# MEMORY: 13.5M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    p = Counter(map(int, input().split()))

    for group_size, people in p.items():
        if people % group_size != 0:
            print("NO")
            break
    
    else:
        print("YES")

