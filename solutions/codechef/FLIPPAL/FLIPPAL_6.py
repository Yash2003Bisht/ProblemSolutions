# QUESTION URL: https://www.codechef.com/problems/FLIPPAL
# STATUS: accepted
# TIME: 0.06
# MEMORY: 9.7M

for _ in range(int(input())):
    n = int(input())
    s = input()
    s_1 = s.count('1')
    s_0 = s.count('0')
    
    if s_1%2 == 0 or s_0%2 == 0:
        print('YES')
    else:
        print('NO')

