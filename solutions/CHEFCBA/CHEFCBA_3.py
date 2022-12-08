# QUESTION URL: https://www.codechef.com/problems/CHEFCBA
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.7M

lst = list(map(int, input().split()))
lst.sort()

lst[1] = lst[1] / lst[0]
lst[0] = lst[0] / lst[0]

lst[3] = lst[3] / lst[2]
lst[2] = lst[2] / lst[2]


if lst[0] == lst[2] and lst[1] == lst[3]:
    print('Possible')
else:
    print('Impossible')


