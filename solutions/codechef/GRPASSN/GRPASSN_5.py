# QUESTION URL: https://www.codechef.com/problems/GRPASSN
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

