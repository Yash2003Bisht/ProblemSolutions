# DATE: 28/12/2022, 10:08:36
# PROBLEM NAME: Pet Store
# PROBLEM URL: https://www.codechef.com/problems/PETSTORE
# PROBLEM DIFFICULTY RATTING: 1126
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.5M

for _ in range(int(input())):
    n = int(input())
    a = set(map(int, input().split()))
    
    if len(a)%2 == 0:
        print("YES")
    else:
        print("NO")

