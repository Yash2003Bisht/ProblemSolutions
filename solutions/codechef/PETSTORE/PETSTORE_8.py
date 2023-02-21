# DATE: 28/12/2022, 10:18:40
# PROBLEM NAME: Pet Store
# PROBLEM URL: https://www.codechef.com/problems/PETSTORE
# PROBLEM DIFFICULTY RATTING: 1126
# STATUS: accepted
# TIME: 0.06
# MEMORY: 16.4M

from collections import Counter
import sys

for _ in range(int(sys.stdin.readline())):
    n = int(input())
    a = Counter(map(int, sys.stdin.readline().split()))
    
    for key, value in a.items():
        if value % 2 != 0:
            sys.stdout.write("NO\n")
            break
    else:
        sys.stdout.write("YES\n")

