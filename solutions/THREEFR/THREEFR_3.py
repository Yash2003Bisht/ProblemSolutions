# QUESTION URL: https://www.codechef.com/problems/THREEFR
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

for _ in range(int(input())):
    l = list(map(int, input().split()))
    l.sort(reverse=True)
    if l[0] == l[1]+l[2]:
        print('yes')
    else:
        print('no')
    

