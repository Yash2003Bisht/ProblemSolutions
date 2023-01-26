# QUESTION URL: https://www.codechef.com/problems/CLLCM
# STATUS: accepted
# TIME: 0.10
# MEMORY: 9.9M

import sys

for _ in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    a = list(map(int, sys.stdin.readline().split()))
    
    for i in a:
        if i%2 == 0:
            sys.stdout.write("NO\n")
            break
    else:
        sys.stdout.write("YES\n")

