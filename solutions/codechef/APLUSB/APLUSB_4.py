# DATE: 11/01/2024, 08:28:47
# PROBLEM NAME: A PLUS B Remastered
# PROBLEM URL: https://www.codechef.com/problems/APLUSB
# PROBLEM DIFFICULTY RATTING: 1284
# STATUS: accepted
# TIME: 0.02
# MEMORY: 8.6M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    flag = True

    a.sort()
    b.sort(reverse=True)
    num = a[0] + b[0]

    for ai, bi, in zip(a, b):
        if ai + bi != num:
            flag = False
            break
    
    if flag:
        print(" ".join(map(str, a)))
        print(" ".join(map(str, b)))
    else:
        print(-1)
    

