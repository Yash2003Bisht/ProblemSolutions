# DATE: 31/08/2022, 02:34:58
# PROBLEM NAME: Elections in Chefland
# PROBLEM URL: https://www.codechef.com/problems/ELECTIONS
# PROBLEM DIFFICULTY RATTING: 1034
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.5M

for _ in range(int(input())):
    a,b,c=map(int,input().split())
    if a>50:
        print('A')
    elif b>50:
        print('B')
    elif c>50:
        print('C')
    else:
        print('NOTA')

