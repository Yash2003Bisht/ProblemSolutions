# QUESTION URL: https://www.codechef.com/problems/THREEFR
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

for _ in range(int(input())):
    l = list(map(int, input().split()))
    if l[0] == l[1]+l[2] or l[1] == l[0]+l[2] or l[2] == l[0]+l[1]:
        print('yes')
    else:
        print('no')
    

