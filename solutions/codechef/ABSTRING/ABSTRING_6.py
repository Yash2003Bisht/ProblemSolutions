# QUESTION URL: https://www.codechef.com/problems/ABSTRING
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
    

