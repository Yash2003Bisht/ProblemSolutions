# DATE: 17/10/2022, 06:19:49
# PROBLEM NAME: Three Friends
# PROBLEM URL: https://www.codechef.com/problems/THREEFR
# PROBLEM DIFFICULTY RATTING: 1074
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.6M

for _ in range(int(input())):
    l = list(map(int, input().split()))
    if l[0] == l[1]+l[2] or l[1] == l[0]+l[2] or l[2] == l[0]+l[1]:
        print('yes')
    else:
        print('no')
    

