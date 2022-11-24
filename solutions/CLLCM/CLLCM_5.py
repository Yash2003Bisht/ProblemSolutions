# QUESTION URL: https://www.codechef.com/problems/CLLCM
# STATUS: accepted
# TIME: 0.15
# MEMORY: 9.9M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a_odd = list(filter(lambda x: x%2 != 0, a))
    
    if len(a_odd) == n:
        print("YES")
    else:
        print("NO")

