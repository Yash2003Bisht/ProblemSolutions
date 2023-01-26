# QUESTION URL: https://www.codechef.com/problems/DARLIG
# STATUS: accepted
# TIME: 0.51
# MEMORY: 9.3M

for _ in range(int(input())):
    a, b = map(int, input().split(" "))
    
    if b:
        if a%4 == 0:
            print('Off' if b == 0 else 'On')
        else:
            print('Ambiguous')
    else:
        if a%4 == 0:
            print('Off')
        else:
            print('On')

