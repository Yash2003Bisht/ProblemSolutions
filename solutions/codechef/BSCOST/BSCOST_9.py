# DATE: 01/11/2022, 06:25:22
# PROBLEM NAME: Binary String Cost
# PROBLEM URL: https://www.codechef.com/problems/BSCOST
# PROBLEM DIFFICULTY RATTING: 1069
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
    
    

