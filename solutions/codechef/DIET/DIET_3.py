# DATE: 26/08/2022, 05:49:35
# PROBLEM NAME: Chef Diet
# PROBLEM URL: https://www.codechef.com/problems/DIET
# PROBLEM DIFFICULTY RATTING: 1025
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.5M

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    remaining = 0
    for index, i in enumerate(a):
        if i+remaining >= k:
            remaining = max(i+remaining-k, 0)
        else:
            print('NO', index+1)
            break
    else:
        print('YES')
        

