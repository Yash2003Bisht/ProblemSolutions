# DATE: 29/11/2022, 06:17:06
# PROBLEM NAME: Chef and Steps
# PROBLEM URL: https://www.codechef.com/problems/CHEFSTEP
# PROBLEM DIFFICULTY RATTING: 1110
# STATUS: accepted
# TIME: 0.32
# MEMORY: 9.9M

for _ in range(int(input())):
    n, k = map(int, input().split())
    d = list(map(int, input().split()))
    s = ''
    
    for i in d:
        if i%k == 0:
            s += '1'
        else:
            s += '0'
    
    print(s)

