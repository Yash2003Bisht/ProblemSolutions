# QUESTION URL: https://www.codechef.com/problems/TSTROBOT
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

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
        

