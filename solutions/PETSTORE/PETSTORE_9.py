# QUESTION URL: https://www.codechef.com/problems/PETSTORE
# STATUS: accepted
# TIME: 0.06
# MEMORY: 16.7M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = Counter(map(int, input().split()))
    
    for key, value in a.items():
        if value % 2 != 0:
            print("NO")
            break
    else:
        print("YES")

