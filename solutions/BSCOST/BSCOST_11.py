# QUESTION URL: https://www.codechef.com/problems/BSCOST
# STATUS: wrong answer

for _ in range(int(input())):
    n, x, y = input().split()
    s = input()
    
    if s.count('0') == 0 or s.count('1') == 0:
        print(0)
    elif x > y:
        print(y)
    else:
        print(x)
    
    

