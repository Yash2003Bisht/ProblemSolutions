# QUESTION URL: https://www.codechef.com/problems/DIET
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.5M

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    remaining = 0
    for index, i in enumerate(a):
        if i+remaining >= k:
            remaining = i+remaining-k
        else:
            print('NO', index+1)
            break
    else:
        print('YES')
        

