# DATE: 24/11/2022, 06:38:31
# PROBLEM NAME: Chef vs Doof
# PROBLEM URL: https://www.codechef.com/problems/CLLCM
# PROBLEM DIFFICULTY RATTING: 1108
# STATUS: accepted
# TIME: 0.11
# MEMORY: 9.9M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    
    for i in a:
        if i%2 == 0:
            print("NO")
            break
    else:
        print("YES")

