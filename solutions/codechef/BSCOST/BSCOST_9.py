# QUESTION URL: https://www.codechef.com/problems/BSCOST
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

for _ in range(int(input())):
    n, x, y = map(int, input().split())  # forget to typecast to integer here on previous submissions
    s = input()
    
    if s.count('01') == 0 and s.count('10') == 0:
        print(0)
    elif x > y:
        print(y)
    else:
        print(x)
    
    

