# QUESTION URL: https://www.codechef.com/problems/BSCOST

for _ in range(int(input())):
    n, x, y = input().split()
    s = input()
    
    if s.count('10') == 0 or s.count('01') == 0:
        print(0)
    elif x > y:
        print(y)
    else:
        print(x)
    
    

