# QUESTION URL: https://www.codechef.com/problems/DIET

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
        

