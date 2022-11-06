# QUESTION URL: https://www.codechef.com/problems/BSCOST
# STATUS: accepted

for _ in range(int(input())):
    n, x, y = map(int, input().split())  # forget to typecast to integer here on previous submissions
    s = input()
    
    if s.count('0') == 0 or s.count('1') == 0:
        print(0)
    elif x > y:
        print(y)
    else:
        print(x)
    
    

