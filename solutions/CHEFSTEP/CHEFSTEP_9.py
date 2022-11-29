# QUESTION URL: https://www.codechef.com/problems/CHEFSTEP
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

