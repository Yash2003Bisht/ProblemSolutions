# QUESTION URL: https://www.codechef.com/problems/CNDY
# STATUS: accepted
# TIME: 0.03
# MEMORY: 10M

from collections import Counter

for _ in range(int(input())):
    n = int(input())
    a = Counter(map(int, input().split()))
    
    for key, value in a.items():
        if value >= 3:
            print("No")
            break
    
    else:
        print("Yes")


