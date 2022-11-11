# QUESTION URL: https://www.codechef.com/problems/GRPASSN
# STATUS: accepted
# TIME: 0.04
# MEMORY: 13.4M

from collections import Counter
import sys

for _ in range(int(input())):
    n = int(sys.stdin.readline())
    p = Counter(map(int, sys.stdin.readline().split()))

    for group_size, people in p.items():
        if people % group_size != 0:
            sys.stdout.write("NO\n")
            break
    
    else:
        sys.stdout.write("YES\n")

