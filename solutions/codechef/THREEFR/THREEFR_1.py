# QUESTION URL: https://www.codechef.com/problems/THREEFR
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.5M

for _ in range(int(input())):
    x, y, z = map(int, input().split())
    if x == y+z or y == x+z or z == x+y:
        print('yes')
    else:
        print('no')
    

