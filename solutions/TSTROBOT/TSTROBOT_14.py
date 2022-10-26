# QUESTION URL: https://www.codechef.com/problems/TSTROBOT

for _ in range(int(input())):
    n,x = map(int, input().split())
    s = input()
    p = [x]
    for i in s:
        if i == 'R':
            x += 1
            p.append(x)
        else:
            x -= 1
            p.append(x)
    print(len(set(p)))
        

