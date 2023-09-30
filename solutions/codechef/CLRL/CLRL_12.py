# DATE: 30/09/2023, 07:55:22
# PROBLEM NAME: Chef goes Left Right Left
# PROBLEM URL: https://www.codechef.com/problems/CLRL
# PROBLEM DIFFICULTY RATTING: 1498
# STATUS: accepted
# TIME: 0.39
# MEMORY: 85.3M

for _ in range(int(input())):
    n, r = map(int, input().split())
    a = list(map(int, input().split()))
    flag = True
    c1, c2 = [], []

    for ratting in a:
        if ratting >= r:
            c1.append(ratting)
        else:
            c2.append(ratting)
    
    for i in range(1, len(c1)):
        if c1[i] > c1[i-1]:
            flag = False
            break

    if flag:
        for i in range(1, len(c2)):
            if c2[i] < c2[i-1]:
                flag = False
                break


    if flag:
        print("YES")
    else:
        print("NO")


